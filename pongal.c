#include<stdio.h>
#include<dos.h>
int main()
{
   char a[]="happy pongal";
   int i;
   for(i=0;a[i]!='\0';i++)
   {
      printf("%c",a[i]);
      delay(200);
   }
   exit(0);
   return 0;
}
