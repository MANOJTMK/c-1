#include <stdio.h>
int main(void) 
{
int n,l,r,count;
scanf("%d",&n);
scanf("%d",&l);
scanf("%d",&r);
for(int i=l;i<=r;i++)
{
	if(n==i)
	{
	count=1;
	}
}
if(count==1)
{
printf("yes");
}
else
{
printf("no");
}
return 0;
}