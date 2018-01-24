#include <stdio.h>
#include<string.h>
int main(void) {
	char s[10];
	int i,n;
	scanf("%s",s);
	n=strlen(s);
	for(i=0;i<n;i++)
	{
		if(i%2==0)
		{
			printf("%c",s[i]);
		}
		
	}
    printf("\t");
	for(i=0;i<n;i++)
	{
		if(i%2!=0)
		{
			printf("%c",s[i]);
		}
		
	}
	
	return 0;
}