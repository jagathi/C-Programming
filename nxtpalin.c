#include<stdio.h>
#include<conio.h>
int nxtpali(int num)
{
       int r,sum=0;
       int n=++num;
       while(n>0)
       {
                 r=n%10;
                 sum=sum*10+r;
                 n=n/10;
        }
        if(sum!=num)
        {
                nxtpali(num);
        }
        else
        {
                return num;
        }

}
int main()
{
        int num;
        printf("input:");
        scanf("%d",&num);
        num=nxtpali(num);
        printf("\noutput:%d",num);
        getch();
        return 0;
}
