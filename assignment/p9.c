//prg to dislay sum of the digits

#include <stdio.h>
int main()
{
	int num,sum=0,rem;
	
	printf("enter a value :");
	scanf("%d",&num);
	
	while(num!=0)
	{
	rem=num%10;
	sum=rem+sum;
	num=num/10;
	}
	
	printf("%d\n",sum);
}


