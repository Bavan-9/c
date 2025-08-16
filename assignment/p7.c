//prg to display palindrome number between 200 to 500

#include <stdio.h>
int main()
{
	int num,sum,rem,temp;

	for(num=200;num<=500;num++)
	{
	sum=0;
	temp=num;
	
	while(temp!=0)
	{
	rem=temp%10;
	sum=sum*10+rem;
	temp=temp/10;
	}
	
	if(num==sum)

		printf("%d ",sum);
	}

	printf("\n");
}


