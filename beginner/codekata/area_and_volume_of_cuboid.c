#include<stdio.h>

int main() 
{
   int l,b,h,area,volume;
   scanf("%d%d%d",&l,&b,&h);
   area=l*b*h;
   volume=2*((l*h)+(l*b)+(b*h));
   printf("Area:%d\n",area);
   printf("Volume:%d",volume);
   return 0;
}