#include <stdio.h>
#include<math.h>
int main()
{

	int num,rem=0,count,sum=0,temp;
	
	for(num=1;num<100000;num++)
	{
	sum=0;	
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
			printf("%d ",sum);
	}
	printf("\n");
}

