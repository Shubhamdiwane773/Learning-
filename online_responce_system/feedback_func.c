
#include "feedback.h"
void feedback_func()
{
	DIR* dir = opendir(".");		// to oprn directory
	if(dir == NULL)
	{
		return ;
	}
		struct dirent* entity;
		entity = readdir(dir);
		int i=0;
		char *ctf[i][NAME_SIZE];   			// declared ctf to store created training files			
		char check[]="_training.xls";
		while(entity != NULL)
		{
		if(strstr(entity->d_name,check) && !strstr(entity->d_name,"#"))
		{
			i++;
			ctf[i][NAME_SIZE]=entity->d_name;		// created training files will store here

		}
		entity = readdir(dir);
		}
		//closedir(dir);

	FILE *fp;
	int k=0;
	char *stf[k][NAME_SIZE];
	int count=1;			// declared stf to store send training files : done trainng files 
	for (int j =1;j<=i;j++)
	{
		
		fp = fopen(ctf[j][NAME_SIZE],"r");
		
		if(fp == NULL)
		{
		
			printf("unable to open the file %s\n",ctf[j][NAME_SIZE]);
			return ;
		}
		else{
			char ch;
			
			while(1)
			{
				ch = fgetc(fp);
				if(ch =='\n')
					count++;
				if(ch == '\t')
					Li++;
				if(feof(fp))
					break;
			}

			fclose(fp);
			if(count > 1)     // checking whether the responses are saved or not
				   // if resopnses saved then files will store to stf
			{
				k++;
				stf[k][NAME_SIZE]=ctf[j][NAME_SIZE];
					
			}
		}
	
	}
	int lines = count;
	if(k==0)
	{
		printf("No trainings are conducted \n");
		return ;
	}
        printf("Below trainings have been conducted.\n");
        
        
      
	for(int j = 1; j<=k;j++)
	{
		printf("%d. %s \n",j,stf[j][NAME_SIZE]);    // displaying the completed training files
	}
	int opt = check_opt(k);
	char fn[NAME_SIZE];
	strcpy(fn,stf[opt][NAME_SIZE]);
	strcpy(Tf,fn);
	
	split = strtok(fn,".");
	strcat(split,"_feedback.xls");
	
	DIR *dir2 = opendir(".");
	struct dirent* entity2;
	entity2= readdir(dir2);
	int flag =0;
	while(entity2 != NULL)
	{
		if(strcmp(split,entity2->d_name)==0)
		{
			flag = 1;
			break;
		}
		entity2= readdir(dir2);
	}
	if(flag == 1)
	{
		pcreate(lines);
	}
	else {
		FILE *fp2 = fopen(split,"w");
		fprintf(fp2,"EMP ID\t");
		fprintf(fp2,"EMP NAME\t");
		fprintf(fp2,"EMAIL ID\t");
		fprintf(fp2,"REPORTING MANAGER\t");
		fprintf(fp2,"FEEDBACK\n");
		fclose(fp2);
		pcreate(lines);
	}
	
	

	
	closedir(dir2);
	return ;
}

void pcreate(int lines)
{

	pthread_t tid;
	while(1)
	{

		pthread_create(&tid,NULL,data_enter,split);

		pthread_join(tid,NULL);
		
		lines--;
		if((lines-1) == 0)
		{
			break;
		}
	char ch;
	printf("do you want to give another Employee details y/n \n");
	getchar();
	scanf("%c",&ch);
	
	if(ch == 'n')
	{
		break;
	}

	}


}
int check_opt(int k)
{

	static int count = 3;
	int opt;
	printf("Enter the file number that you want to give feedback\n");		

	scanf("%d",&opt);

	if(opt <= k && opt > 0)
	{
		return opt;
	}
	else
	{
		printf("Invalid input.\n");
		count--;
		if(count == 0)
		{
			printf("\nYou have given wrong input three times\n\n");
			main();
		}
		check_opt(k);
	}

}
int check_data()
{
	//int m = 0;
	FILE *f = fopen(Tf,"r");
	FILE *fp = fopen(Tf,"r");
	
	int flag=0,i=0;
	char c;
	while(!feof(f))
	{
		char buffer[FEED];
		fscanf(f,"%s\t",buffer);
		strcat(buffer,"\0");
		if(strcmp(det.Emp_id,buffer)== 0)
		{
		
			flag = 1;
			return flag;
		}
		strcat(buffer,"\0");
		
	}
	
	return flag;

}

void check_id()
{
	printf("\nEnter the Employee ID :");
	//getchar();
	scanf("%s",det.Emp_id);
	int k=0;
	static int count=3;
	if(count == 0)
	{
		printf("\nYou have given wrong input three times\n\n");
		Training();	
	}
	while(det.Emp_id[k] != '\0')
	{
		
		if(!(det.Emp_id[k] >= 48 && det.Emp_id[k] <= 57) )
		{
			count--;
			printf("\nNo characters are not allowed\n");
			check_id();
		}
		k++;
	}
	if(det.Emp_id[0] != '0')
	{
		count--;
		printf("\nWrong input give again\n");
		
		check_id();
	}
	
	if(k>=SIZE)
	{
		count--;
		printf("\nEmployee id size exceede\n");
		check_id();
	}
	int flag = check_data();
	if(flag == 0)
	{
		count--;
		printf("\n%s employee not taken training\n",det.Emp_id);
		check_id();
	}
	else
	{
		FILE *fp = fopen(split,"r");
		while(!feof(fp))
		{
			char buffer[FEED];
			fscanf(fp,"%s\t",buffer);
			strcat(buffer,"\0");
			if(strcmp(det.Emp_id,buffer)==0)
			{
				count--;
				printf("\n%s has given feedback already.\n",det.Emp_id);
				check_id();
			}
	
		}
		return;
	
	}
}
void check_name()
{
	printf("\nEnter the Employee Name : ");
	getchar();
	scanf("%[^\n]",det.Name);
	int k=0;
	static int count = 3;
	while(det.Name[k] != '\0')
	{
		
		if(count == 0)
		{
			printf("\nYou have given wrong input three times\n\n");
			Training();	
		}
		if(strstr(det.Name,"  "))
		{
			printf("\nMore than one space between names are not allowed\n");
			check_name();
		}
		if(det.Name[k]==' ' || (det.Name[k] >= 65 && det.Name[k] <= 90) || (det.Name[k] >= 97 && det.Name[k]<=122))
		{
			k++;
		}
		else
		{
			count--;
			printf("\nNo special chareacters are allowed, Give input again\n");
			check_name();
		}
	}

}

void check_email()
{
	printf("\nEnter the Employee email id :");
	scanf("%s",det.Email_id);
	int k=0;
	static int count = 3;
	if(count == 0)
	{
		printf("\nYou have given wrong input three times\n\n");
		Training();	
	}
	if(!strstr(det.Email_id,Email_check))
	{
		count--;
		printf("\nNot thundersoft mail extension\n");
		check_email();
	}
	if(det.Email_id[0]=='.')
	{
		printf("\nEmail id shoudn't start with dot(.)\n");
		check_email();
	}
	while(det.Email_id[k] != '\0')
	{
		
		if(det.Email_id[k]=='.' || (det.Email_id[k] >= 65 && det.Email_id[k] <= 90) || (det.Email_id[k] >= 97 && det.Email_id[k]<=122) || det.Email_id[k]=='@')
		{
			k++;
		}
		else
		{
			count--;
			printf("\nNo special chareacters are allowed, Give input again\n");
			check_email();
		}
	}
}


void check_reporting_manager()
{

	printf("\nEnter the name of the reporting manager : ");
	getchar();
	scanf("%[^\n]",det.Reporting_manager);
	int k=0;
	static int count = 3;
	if(count == 0)
	{
		printf("\nYou have given wrong input three times\n\n");
		Training();	
	}
	if(strstr(det.Reporting_manager,"  "))
	{
		printf("\nMore than one space between names are not allowed\n");
		check_reporting_manager();
	}
	while(det.Reporting_manager[k] != '\0')
	{
		if(det.Reporting_manager[k]==' ' || (det.Reporting_manager[k] >= 65 && det.Reporting_manager[k] <= 90) || (det.Reporting_manager[k] >= 97 && det.Reporting_manager[k]<=122))
		{
			k++;
		}
		else
		{
			count--;
			printf("\nNo special chareacters are allowed, Give input again\n");
			check_reporting_manager();
		}
	}
	
	
}

void check_feedback()
{
	printf("\nEnter the feedback : ");
	getchar();
	scanf("%[^\n]",det.Feedback);
	int k=0;
	static int count = 3;
	if(count == 0)
	{
		printf("\nYou have given wrong input three times\n\n");
		Training();	
	}
	if(strstr(det.Feedback,"  "))
	{
		printf("\nMore than one space between words  are not allowed\n");
		check_feedback();
	}
	while(det.Feedback[k] != '\0')
	{
		if(det.Feedback[k]==' ' || (det.Feedback[k] >= 65 && det.Feedback[k] <= 90) || (det.Feedback[k] >= 97 && det.Feedback[k]<=122))
		{
			k++;
			
		}
		else
		{
			count--;
			printf("\nNo special chareacters are allowed, Give input again\n");
			check_feedback();
		}
	}
	if(k > FEED)
	{
		count--;
		printf("size of the input is exceeded, feedback should contain 256 characters");
		check_feedback();
	}
}


void *data_enter(char split[])
{
	FILE *fp2 = fopen(split,"a");
	pthread_mutex_lock(&lock);
	
	check_id(split);
	
	check_name();
	
	check_email();
  
    	check_reporting_manager();
	
	check_feedback();
	
	write_data(fp2);
	pthread_mutex_unlock(&lock);
	fclose(fp2);
}

void *data_enter2(FILE *fp2)
{
	pthread_mutex_lock(&lock);
	
	check_id();
	
	check_name();
	
	check_email();
  
    	check_reporting_manager();
	
	check_feedback();
	
	write_data(fp2);
	pthread_mutex_unlock(&lock);

}

void *data_enter3(FILE *fp2)
{
	pthread_mutex_lock(&lock);
	
	check_id();
	
	check_name();
	
	check_email();
  
    	check_reporting_manager();
	
	check_feedback();
	
	write_data(fp2);
	pthread_mutex_unlock(&lock);
}

void write_data(FILE *fp2)
{
	
	fprintf(fp2,"%s\t",det.Emp_id);
	fprintf(fp2,"%s\t",det.Name);
	fprintf(fp2,"%s\t",det.Email_id);
	fprintf(fp2,"%s\t",det.Reporting_manager);
	fprintf(fp2,"%s\n",det.Feedback);
	
}




