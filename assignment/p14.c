//prg to display perfect number btn 1 to 100000
 
#include <stdio.h>
int main()
{
	int i=1,num,sum=0;

	for(num=1;num<=10000;num++)
	{
	sum=0;
	i=1;	
	while(i<num)
	{
		if(num%i==0)
			{
			sum=sum+i;
			}
			i++;
	}
			
		/*for(i=1;i<num;i++)
		{
			if(num%i==0)
				sum=sum+i;
		}*/

		if(num==sum)
			printf("%d ",sum);
	}

	printf("\n");
}



