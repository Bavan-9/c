//prg to display given number is strong number or not

#include<stdio.h>
int main()
{
	int fact,num,sum,rem,temp;

	printf("enter a number:");
	scanf("%d",&num);


	for(temp=num,sum=0;temp!=0;temp/=10)
	{
	for(rem=temp%10,fact=1;rem!=0;rem--)
	fact=fact*rem;
	sum=fact+sum;
	}

	if(sum==num)
		printf("it is a strong number\n");
	else
		printf("it is not a strong number\n");

}




