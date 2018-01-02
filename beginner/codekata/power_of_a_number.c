#include <stdio.h>

int main(void)
{
    int pow=1,n,m,i;
    scanf("%d%d",&n,&m);
    for(i=0;i<m;i++)
    {
        pow=pow*n;
    }
    printf("%d",pow);
return 0;
}
