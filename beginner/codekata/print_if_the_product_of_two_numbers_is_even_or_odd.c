#include<stdio.h>

int main()

{

    int n1,n2,product;

    scanf("%d",&n1);
    scanf("%d",&n2);
    product=n1*n2;
    
    if(product%2==0)
    {
    	printf("even");
	}
	else
	{
		printf("odd");
	}

    return 0;

}