//prg to display whether the given number is perfect number or not

#include <stdio.h>
int main()
{
	int i=1,num,sum=0;
	
	printf("enter a number :");
	scanf("%d",&num);
	
	while(i<num)
	{
	if(num%i==0)
	sum=sum+i;
	i++;
	}
	
	if(num==sum)
		printf("it is a perfect number\n");
	else
		printf("it is not a perfect number\n");
	
	printf("%d\n",sum);
}


