//prg to display power of a given number

#include <stdio.h>
int main()
{
	int x,sum=1,y,i=0;

	printf("enter a value\n");
	scanf("%d%d",&x,&y);

	while(i<y)
	{
	sum=x*sum;
	++i;
		}

	printf("%d\n",sum);
}

