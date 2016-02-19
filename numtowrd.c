#include<stdio.h>
#include<conio.h>
int main()
{
     int num,mod,n,flag=0;
     char *one[]={"one ","two ","three ","four ","five ","six ","seven ","eight ","nine "};
     char *ten[]={"ten ","twenty ","thirty ","forty ","fifty ","sixty ","seventy ","eighty ","ninety "};
     char *tens[]={"eleven ","twelve ","thirteen ","fourteen ","fifteen ","sixteen ","seventeen ","eighteen ","nineteen "};
     printf("input:");
     scanf("%d",&num);
     if(num>999)
     {
              printf("out of range 0-999");
     }
     mod=num/100;
     printf("\noutput:");
     if(mod)
     {
              mod--;
              printf("%s hundred",one[mod]);
              n=num%100;
              if(n!=0)
              {
	                printf(" and ");
              }
              else
              {
	                flag=1;
              }
     }
     else
     {
               n=num;
     }
     mod=n/10;
     if(mod)
     {
               n=n%10;
               if((mod==1)&&(n==0))
               {
	                 printf("%s",ten[0]);
	                 flag=1;
               }
               else if((mod==1)&&(n>0))
               {
	                 n--;
	                 printf("%s",tens[n]);
	                 flag=1;
                }
                else if(mod>1)
                {
	                 mod--;
	                 printf("%s",ten[mod]);
                }
     }
     if(flag==0)
     {
                n--;
                printf("%s",one[n]);
     }
     getch();
     return 0;
}
