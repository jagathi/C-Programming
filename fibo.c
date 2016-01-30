#include<stdio.h>
#include<conio.h>
int fibo(int k)
{
     int f=0,f0=0,f1=1;
     while(f<=k)
     {
            f=f0+f1;
            f0=f1;
            f1=f;
     }
    return f0;
}
void main()
{
     int i,j;
    scanf("%d",&i);
    j=fibo(i);
    while(i>0)
    {
          if(i==j)
          {
               printf("%d",j);
               break;
          }
          else
          {
               printf("%d+",j);
               i-=j;
               j=fibo(i);
          }
     }
     getch();
}
