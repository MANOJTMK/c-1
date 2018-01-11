#include<stdio.h>
int main()
{
	int n,a[50],sum=0,avg;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	avg=sum/n;
	printf("%d",avg);
	return 0;
}