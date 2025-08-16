//prg for display a prime number btn 1-100 end with 7

#include <stdio.h>
int main()
{
	int num,i;

	for(num=1;num<=100;num++)
	{
		for(i=2;i<num;i++)
		if(num%i==0)
		break;
	        if((i==num)&&(num%10==7))
		printf("%d ",num);
	}
	printf("\n");

}

	
