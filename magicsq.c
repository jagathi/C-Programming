#include<stdio.h>
#include<conio.h>
void main()
{
     int n,i,j,x,c,m,k;
     int a[10][10];
     scanf("%d",&n);
     x=n*n;
     m=n-1;
     c=1;
     k=n/2;
     for(i=0;i<n;i++)
     {
              for(j=0;j<n;j++)
              {
                        	a[i][j]=0;
              }
     }
     a[0][k]=c++;
     i=0;j=k;
     while(c<=x)
     {
             i--;
             j++;
             if((i==(-1))&&(j==n))
             {
                        i=i+2;
                        j--;
                        goto lab;
              }
              lab:if((i!=(-1))&&(j!=n))
	                {
	                        if(a[i][j]==0)
	                        {
		                                  a[i][j]=c++;
		                                  continue;
	                        }
                          else
	                        {
	                                   	i=i+2;
	                                   	j--;
	                                  	goto lab;
	                        }
                 }
                 if((i==(-1))&&(j<n))
                 {
	                       i=m;
	                       goto lab;
                 }
                 else if((j==n)&&(i<n))
                 {
	                       j=0;
	                       goto lab;
                 }

     }
     for(i=0;i<n;i++)
     {
            for(j=0;j<n;j++)
            {
	                    printf("\t %d",a[i][j]);
            }
            printf("\n");
     }
    getch();
}

