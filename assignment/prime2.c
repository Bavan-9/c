//prg for given number is prime or not


#include <stdio.h>
int main()
{
	int num,i=2;

	printf("enter a number :");
	scanf("%d",&num);

	while(i<num)
	{
		if(num%i==0)
			break;
		i++;
	}

	if(num==i)
		printf("it is a prime\n");
	else
		printf("it is not a prime\n");
}
	
