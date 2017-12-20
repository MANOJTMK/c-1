#include<stdio.h>
#include<string.h>
int main(void)
{
char s[10],temp;
int i,len;
//gets(s);
scanf("%s",s);
len=strlen(s);
if((len%2) == 0)
{
for(i=0;i<=len;i=i+2)
{
temp=s[i];
s[i]=s[i+1];
s[i+1]=temp;
}
//puts(s);
printf("%s",s);
}
else
{
for(i=0;i<=len;i=i+2)
{
temp=s[i];
s[i]=s[i+1];
s[i+1]=temp;
}
printf("%s",s);
printf("%c",s[len]);
}
return 0;
}
