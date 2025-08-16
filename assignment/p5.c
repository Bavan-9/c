//program to dislay a number in fibonacci series

#include <stdio.h>
int main()
{
	int a=0,b=1,n,c;
	
	printf("enter a n value :");
	scanf("%d",&n);
	
	while(a<n)
	{
	c=a+b;
	printf(" %d",a);
	a=b;
	b=c;
	}
	
	printf("\n");
}




