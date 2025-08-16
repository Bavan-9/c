#include<stdio.h>
int main()
{

	int num,x,pos;
	printf("enter a number and position\n");
	scanf("%d%d",&num,&pos);
	printf("enter a case :1 to set a bit,2 to clear a bit,3 to compliment a bit\n");
	scanf("%d",&x);

	switch (x)
	{
		case 1 :
			num=num|(1<<pos);
		//	printf("it is set\n");
			printf("%d",num);
			break;
		case 2:
			num=num&~(1<<pos);
		//	printf("it is a clear\n");
			printf("%d",num);
			break;
		case 3 :
			num=num^(1<<pos);
		//	printf("it is a compliment\n");
			printf("%d",num);
			break;
	}
	printf("\n");
}	
	



