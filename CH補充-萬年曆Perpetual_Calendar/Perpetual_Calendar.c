#include <stdio.h>
#include <stdlib.h>

#define YEAR 365
int leap(int year)
{
int n;
n=(year%4==0&&year%4!=0||year%400==0);
return(n);
}
void count(int year, int month)
{
int i,day,first_day,flag,year1,year2,temp=6;
flag=leap(year);
year1=year/100;
year2=year%100;
if(year>=2000)
{
year1-=20;
day=year1/4;
day+=(YEAR+24)*year1+YEAR*year2+(year2-1)/4;
if(year>2000)day++;
switch(month)
{
case 1:day+=0;break;
case 2:day+=31;break;
case 3:day+=59+flag;break;
case 4:day+=90+flag;break;
case 5:day+=120+flag;break;
case 6:day+=151+flag;break;
case 7:day+=181+flag;break;
case 8:day+=212+flag;break;
case 9:day+=243+flag;break;
case 10:day+=273+flag;break;
case 11:day+=304+flag;break;
case 12:day+=334+flag;break;
}
day+=temp;
first_day=day%7;
}
else
{
year1=20-1-year1;
year2=100-year2-1; /*倒?，?多?1*/
day=year1/4;
day+=36524*year1+365*year2+year2/4;
switch(month)
{
case 12:day+=31;break;
case 11:day+=61;break;
case 10:day+=92;break;
case 9:day+=122;break;
case 8:day+=153;break;
case 7:day+=184;break;
case 6:day+=214;break;
case 5:day+=245;break;
case 4:day+=275;break;
case 3:day+=306;break;
case 2:day+=334+flag;break;
case 1:day+=365+flag;break;
}
day-=temp;
day=day%7;
first_day=(7-day)%7;
}
switch(month)
{
case 1:
case 3:
case 5:
case 7:
case 8:
case 10:
case 12:month=31;break;
case 4:
case 6:
case 9:
case 11:month=30;break;
case 2:month=28+flag;
}
printf(" SUN MON TUE WED THU FRI SAT\n");
for(i=1;i<=4*first_day;i++)
printf(" ");
for(i=0;i<month;i++)
{
printf("%4d",i+1);
if((first_day+i)%7==6)printf("\n");
}
printf("\n");
}
void main()
{
int year,i;
printf("please input year :\n");
while(scanf("%d",&year)!=1)
{
printf("?入??，?重新?入");
fflush(stdin);
}
for(i=1;i<13;i++)
{
printf("month:%d\n",i);
count(year,i);
}
}
