#include<stdio.h>
#include<conio.h>
#include<time.h>
int main()
{

int sec=0,mins=59,hours=23,days=31,months=12,year=2022;

while(1)
{

    system("cls");
    printf("%02d:%02d:%02d",hours,mins,sec);
    printf("\n");
    printf("%d:%d:%d",days,months,year);
    sec++;
    if(sec==60)
    {
        mins++;
        sec=0;
    }
    if(mins==60)
    {
        hours++;
        mins=0;
    }
    if(hours==24)
    {

        days++;
        hours=0;
    }
    if((months==1||months==3||months==5||months==7||months==8||months==10||months==12)&&days==32)
    {
        months++;
        days=1;
    }
    if((months==4||months==6||months==9||months==11)&&days==31)
    {
        months++;
        days=1;
    }
    if(months==2&&days==29)
    {
        months++;
        days=1;
    }
    if(months==13)
    {

        year++;
        months=1;
    }




    sleep(1);











}
}
