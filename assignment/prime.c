//prg to display twin prime number

#include <stdio.h>
int main()
{
	int num,i,temp;

	for(num=1;num<=100;num++)
	{
		for(i=2;i<num;i++)
		if(num%i==0)
		break;
	        if(i==num)
		{
		printf("%d ",num);
		}
		temp=num;
		if(temp-2==num)
		printf("(%d,%d)",temp,num);
	}
	printf("\n");

}

	
