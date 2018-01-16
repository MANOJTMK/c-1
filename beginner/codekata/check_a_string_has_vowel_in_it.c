#include <stdio.h>
int main(void) 
{
char str[50];
int i=0,count=0;
scanf("%s",str);
while(str[i]!='\0')
{
if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
count=1;
i++;
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