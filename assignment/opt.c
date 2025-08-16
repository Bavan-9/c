/*#include<stdio.h>
int main()
{
char name='E';
name=name+'A'-13;
printf("%c",name);
}*/

/*#include <stdio.h>
int main()
{
int _1a=023, _1b=0x75;
int _1c= _1a + _1b +5;
printf("%d",_1a);
}*/

/*#include <stdio.h>
void main()
{
int x=8;
int y;
y=x++ + ++4;
printf("%d",y);
}*/

/*#include <stdio.h>
int main()
{
int x = 5, y = 2;
x /= x / y;
printf("%d\n", x);
return 0;
}*/

/*#include <stdio.h>
int main()
{
int x = 2, y = 0;
int z = (y++) ? y == 1 && x : 5;
printf("%d\n", z);
return 0;
}*/

/*#include<stdio.h>
int main()
{
int x=6;
int y=sizeof(x=x+5);
printf("%d %d\n",x,y);
}*/

/*#include<stdio.h>
int main()
{
int s=5;
int t=-s<<2>>3;
printf("%d",t);
}*/

/*#include <stdio.h>
int main() {
int flag=1;
!flag;
flag&=!flag;
printf("%d",flag);
}*/

#include <stdio.h>
void main()
{
int a = 10, b = -11, c = 0, d;
d = ++a && ++b || ++c;
printf("%d %d %d %d", a, b, c, d);
}

/*#include <stdio.h>
void main()
{
int a = 10;
a<<2;
a>>2;
a=a++;
printf("%d",a);
}*/

/*#include <stdio.h>
void main()
{
char x=566;
x++;
++x;
printf("%d",x);
}*/

/*#include <stdio.h>
int main() {
int i=4,j=-5,k;
k=~j&~i;
printf("%d",k);
}*/

/*#include <stdio.h>
int main() {nt var=076;
var|=3;
var&=4;
printf("%d",var);
}*/

/*#include <stdio.h>
void main()
{
int a = 10, b= 20;
int c;
c=a==b=a;
printf("%d",c);
}*/

//15.Write a program to divide a integer number by 2 using bitwise operators.

/*#include <stdio.h>
void main()
{
int x=5;
int y;
y=x++==++x;
printf("%d ",y);
y=++x==x;
printf("%d",y);
}*/

/*#include <stdio.h>
int main()
{
int a;
a=sizeof(!(!17.5));
printf("%d",a);
}*/

/*#include<stdio.h>
int main()
{
int p=4,q=-5,y=2,x=6,z;
z=++p/x + --q*p/y;
printf("%d\n",z);
}*/

/*#include <stdio.h>
int main()
{
int a=2,b;
b=-+a -+a + -(-a);
printf("%d",b);
}*/

