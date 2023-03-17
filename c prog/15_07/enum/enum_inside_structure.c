#include<stdio.h>
#include<stdlib.h>
struct date
{
    enum {mon,tue,wen,thur,fri,sat,sun} day;
    enum {jan=1,feb,march,april,may,jun,jul,aug,sep,oct,nov,dec}month;
};
int main()
{
    struct date* date;
    date = (struct date*) malloc(sizeof(struct date));
    date->day=fri;
    date->month=aug;
    printf("day=%d\n",date->day);
    printf("month=%d\n",date->month);
}
