//prg to display a given number is odd or even

#include<stdio.h>
int main()
{
	int num;

	printf("enter a number : ");
	scanf("%d",&num);

	/*printf("num=%d\n",num);
	num%2==0?printf("it is a even"):printf("it is a odd");*/
	

	if(num%2==0)
		printf("it is even\n");
	else
		printf("it is odd\n");
	
	printf("\n");
}
