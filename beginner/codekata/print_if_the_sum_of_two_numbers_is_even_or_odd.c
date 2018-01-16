#include<stdio.h>

int main()

{

    int n1,n2,add;

    scanf("%d",&n1);
    scanf("%d",&n2);
    add=n1+n2;
    
    if(add%2==0)
    {
    	printf("even");
	}
	else
	{
		printf("odd");
	}

    return 0;

}