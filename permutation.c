#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,k,j,a[10],frt,end;
    clrscr();
    printf("no.of numbers");
    scanf("%d",&n);
    printf("enter the numbers");
    for(i=0;i<n;i++)
    {
         scanf("%d",&a[i]);
    }
    for(k=1;k<=n;k++)
    {
         for(frt=0;frt<=n-k;frt++)
         {
	              if(k!=1)
	              {
	                      end=frt+k-1;
	                      for(j=end;j<n;j++)
	                      {
	                            for(i=frt;i<end;i++)
	                            {
		                                printf("%d",a[i]);
	                            }
	                            printf("%d\n",a[j]);
	                       }
                }
                else
                {
	                      printf("%d\n",a[frt]);
                }
           }
     }
    getch();
  }
