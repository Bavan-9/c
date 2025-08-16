//prg to display prime number btn 1 to 1000


#include <stdio.h>
int main()
{
	int num,i;

	for (num=1;num<1000;num++)
	{ 
	i=2;
	while(i<num)
	{
		if(num%i==0)
		break;
		i++;
	}
	if(num==i)
		printf("%d ",num);
	}
	printf("\n");
}
	
