//prg to perform basic calculator using else if ladder 

#include <stdio.h>
int main()
{
	int a,b;
	char op;
	
	printf("enter a value :");
	scanf("%d%d",&a,&b);
	printf("enter a operator : '+','-','*','/','%%', :");
	scanf(" %c",&op);
	
	if(op=='+')
		printf("a=%d b=%d \nres=%d\n",a,b,a+b);
	else if(op=='-')
		printf("a=%d b=%d \nres=%d\n",a,b,a-b);
	else if(op=='*')
		printf("a=%d b=%d \nres=%d\n",a,b,a*b);
	else if(op=='/')
		printf("a=%d b=%d \nres=%d\n",a,b,a/b);
	else if(op=='%')
		printf("a=%d b=%d \nres=%d\n",a,b,a%b);
	else
		printf("it is a invalid operator");
	
	printf("\n");
}
