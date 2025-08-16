//prg to display multiplication table of a given number

#include <stdio.h>
int main()
{
	int num,i=1;

	printf("enter a value :");
	scanf("%d",&num);
mul:
	
	printf("%d*%2d=%2d\n",num,i,num*i);
	i++;
	if(i<=10)
	goto mul;
	printf("\n");
}


