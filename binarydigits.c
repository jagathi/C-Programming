#include<stdio.h>
#include<conio.h>
void main()
{
     int in,mod,bin=0,i=1,j=0;
     scanf("%d",&in);
     while(in!=0)
     {
	              mod=in%2;
	              in=in/2;
	              bin=bin+mod*i;
	              j++;
	              i=i*10;
      }
      printf("%d\n",bin);
      printf("no.of bits:%d\n",j);
      getch();
}
