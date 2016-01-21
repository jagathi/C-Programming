#include<stdio.h>
int main()
{
    long num,rev=0;
    printf("input:");
    scanf("%ld",&num);
    while(num!=0)
    {
	       rev=rev*10+(num%10);
	       num=num/10;
    }
    printf("\noutput:%ld",rev);
    return 0;
}
