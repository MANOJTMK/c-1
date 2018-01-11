#include<stdio.h>
int main()
{
	int n,c=0,rem=0;
	scanf("%d",&n);
	while(n>0)
	{
		n=n/10;
		c++;
	}
	printf("%d",c);
	return 0;
}