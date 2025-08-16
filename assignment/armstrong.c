#include <stdio.h>
#include<math.h>
int main()
{

	int num,rem=0,count,sum=0,temp;
	printf("enter a number :");
	scanf("%d",&num);

	temp=num;
	for(count=0;temp>0;)
	{
		rem=temp%10;
		count++;
		temp=temp/10;
	}
	temp=num;
	while(temp!=0)
	{
		rem=temp%10;
		sum=sum+pow(rem,count);
		temp=temp/10;
	}

	if(num==sum)
		printf("it is arm strong number\n");
	else 
		printf("it is not armstrong number\n");
}

