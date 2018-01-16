#include <stdio.h>

#include<string.h>

int main(void)

{

	char a[10];

	scanf("%[^\n]s",a);
	int len,count=1;
	len=strlen(a);
	
	for(int i=0;i<len;i++)
	{
		if(a[i]==' ')
		{
			count++;
		}
	}
	printf("%d",count);	

}