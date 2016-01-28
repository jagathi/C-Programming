#include <stdio.h>
#include<conio.h>
void output(int );
unsigned char tog(int ,int );
unsigned char togex(int ,int );
unsigned char set1(int ,int);
unsigned char set0(int ,int);
unsigned char swapnib(int);
unsigned char rotright(int);
unsigned char rotleft(int);
void main()
{
      int in,index,r;
      clrscr();
      printf("enter number and bit position:");
      scanf("%d",&in);
      scanf("%d",&index);
      
      printf("\nGiven Number:");
      output(in);
      printf("\t\t Decimal Equivalent: %d",in);
     
      printf("\n Bit %d set to 1:",index);
      r=set1(in,index);
      output(r);
      printf("\t Decimal Equivalent: %d",r);
      
      printf("\n Bit %d set to 0:",index);
      r=set0(in,index);
      output(r);
      printf("\t Decimal Equivalent: %d",r);

      printf("\n toggled bit %d:",index);
      r=tog(in,index);
      output(r);
      printf("\t Decimal Equivalent: %d",r);

      printf("\n toggled except bit %d:",index);
      r=togex(in,index);
      output(r);
      printf("\t Decimal Equivalent: %d",r);

      printf("\n Right rotate:");
      r=rotright(in);
      output(r);
      printf("\t\t Decimal Equivalent: %d",r);

      printf("\n Left rotate:");
      r=rotleft(in);
      output(r);
      printf("\t\t Decimal Equivalent: %d",r);

      printf("\n Swapping nibbles:");
      r=swapnib(in);
      output(r);
      printf("\t Decimal Equivalent: %d\n",r);
     
      getch();
}

void output(int in)
{
       int i,n=128;
	     for(i=0;i<8;i++)
	     {
	             	if(n>in)
	             	{
		                   	printf("0");
	             	}
		            else
		            {
			                  printf("1");
			                  in=in%n;
		            }
		            if(i==3)
		                    printf(" ");
		            n=n/2;
	      }
}
unsigned char set1(int in,int index)
{
       in=in|(1<<index);
       return(in);
}

unsigned char set0(int in,int index)
{
       in = in &(~(1<<index));
       return(in);
}

unsigned char tog(int in,int index)
{
       in=in^(1<<index);
       return(in);
}

unsigned char togex(int in,int index)
{
       in=(~in)^(1<<index);
       return(in);
}

unsigned char rotright(int in)
{
       in=(in>>1)|(in<<7);
       return(in);
}
unsigned char rotleft(int in)
{
       in=(in<<1)|(in>>7);
       return(in);
}

unsigned char swapnib(int in)
{
       in=(in<<4)|(in>>4);
       return(in);
}
