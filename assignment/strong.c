//prg to display strong number btn 1 to 100000

#include<stdio.h>
int main()
{
	int fact,num,sum,rem;
	int temp;


	for(num=1;num<=100000;num++)
	{
	temp=num;sum=0;
	while(temp!=0)
	{
	rem=temp%10;
	fact=1;
	while(rem!=0)
	{
	fact=fact*rem;
	rem--;
	}
	sum=fact+sum;
	temp/=10;
	}


	if(sum==num)
		printf("%d ",sum);
	}
	printf("\n");
}




