#include<stdio.h>
#define ROWS 3
#define COLS 3
void matrixinput(int mat[][COLS]);
void matrixprint(int mat[][COLS]);
void matrixadd(int mat1[][COLS],int mat2[][COLS],int res[][COLS]);
int main()
{
	int mat1[ROWS][COLS],mat2[ROWS][COLS],res[ROWS][COLS];
	printf("enter the first  matrix of size %dx%d:\n",ROWS,COLS);
	matrixinput(mat1);

	printf("\n enter elements in secound matrix of size %dx%d:\n",ROWS,COLS);
	matrixinput(mat2);

	matrixadd(mat1,mat2,res);

	printf("\n sum of first and secound matrix:\n");
	matrixprint(res);
	
	return 0;
}
void matrixinput(int mat[][COLS])
{
	int i,j;
	for(i=0;i<ROWS;i++)
	{
		for(j=0;j<COLS;j++)
		{
			scanf("%d",(*(mat+i)+j));
		}
	}
}
void matrixadd(int mat1[][COLS],int mat2[][COLS],int res[][COLS])
{
	int i,j;
	for(i=0;i<ROWS;i++)
	{
		for(j=0;j<COLS;j++)
		{
			*(*(res+i)+j)=*(*(mat1+i)+j)+*(*(mat2+i)+j);
		}
	}
}
void matrixprint(int mat[][COLS])
{
	int i,j;
	for(i=0;i<ROWS;i++)
	{
		for(j=0;j<COLS;j++)
		{
			printf("%d ",*(*(mat+i)+j));
		}
		printf("\n");
	}
}
