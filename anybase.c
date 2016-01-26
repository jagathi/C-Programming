#include<stdio.h>
#include<conio.h>
void main()
{
      int in,n,base,i=0,mod;
      char out[100];
      printf("enter num and then base:");
      scanf("%d%d",&n,&base);
      in=n;
      if((base>=2)&&(base<=36))
      {
               while(in>0)
               {
                        mod=in%base;
                        in=in/base;
                        if(mod<10)
                        {
                                out[i++]=mod+48;
                        }
                        else
                        {
                                out[i++]=mod+55;
                        }
                }
      }
      else
      {
                printf("base doesnt range between 2-36");
       }
       for(in=i-1;in>=0;in--)
       {
                printf("%c",out[in]);
       }
       getch();
}
