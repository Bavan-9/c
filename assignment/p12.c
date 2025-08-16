//prg to display whether the given number is palindrome or not

#include <stdio.h>
int main()
{
	int num,sum=0,rem;

	printf("enter a value :");
	scanf("%d",&num);

	int temp=num;
	
	while(num!=0)
	{
	rem=num%10;
	sum=rem+sum*10;
	num=num/10;
	}
	
	if(temp==sum)
		printf("it is a palindrome\n");
	else
		printf("it is not palindrome\n");

	printf("%d\n",sum);
}


