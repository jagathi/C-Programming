#include<stdio.h>
#include<conio.h>
float x;
float sqrt(int n)
{
	   float x=n,y=1,a=0.000001;
	   while(x-y>a)
	   {
		         x=(x+y)/2;
		         y=n/x;
     }
	   return x;
}
int main()
{
	   int num;
	   printf("Enter the Number:");
     scanf("%d",&num);
	   printf("square root : %f",sqrt(num));
     getch();
	   return 0;
}
