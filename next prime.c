#include<stdio.h>
#include<conio.h>
int main()
{
     int value,count,flag=1,i;
     printf("INPUT:");
    scanf("%d",&value);
     while(flag)
     {
           count=0;
           for(i=2;i<=value/2;i++)
           {
	               if(value%i==0)
	               {
	                       count++;
	                       break;
	               }
           }
           if((count==0)&&(value>1))
           {
	               printf("\nOUTPUT:%d",value);
	               flag=0;
           }
           value++;
     }
     getch();
     return 0;
}
