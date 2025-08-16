//prg to display first 100 prime number

#include <stdio.h>
int main()
{
	int num,i,count=0;

	for(num=1;num<1000;num++)
	{
		for(i=2;i<num;i++)
		if(num%i==0)
		break;
	        if(i==num)
		{
		printf("%d ",num);
		count++;
		}
		if(count==100)
		break;
	}
	printf("\n");
}	
