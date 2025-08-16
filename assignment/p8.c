//prg to display factorial of a given number

#include<stdio.h>
int main()
{
	int n,i=1,sum;
	
	printf("enter a value :");
	scanf("%d",&n);
	
	while(n!=0)
	{
	sum=i*n;
	i=sum;
	n--;
	}
	
	printf("%d\n",sum);
}

