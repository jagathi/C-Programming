#include<stdio.h>
#include<conio.h>
void main()
{
      int num,j=0;
      printf("input:");
      scanf("%d",&num);
      if(num==0)
      {
            j=1;
      }
      while(num!=0)
      {
	    num=num/2;
	    j++;
      }
      printf("no.of bits:%d\n",j);
      getch();
}
