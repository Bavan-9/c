//prg to display whether the given variable is an alphabet or integer or special character

#include <stdio.h>
int main()
{
	char var;
	
	printf("enter a variable :");
	scanf("%c",&var);
	
	if((65<=var)&&(var<=90))
		printf("it is an uppercase alphabet");
	else if((97<=var)&&(var<=122))
		printf("it is an lowercase alphabet");
	else if((48<=var)&&(var<=57))
		printf("it is an integer");
	else
		printf("it is a special character");
	
	printf("\n");
}

