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

/*#include <stdio.h>
void main()
{
int a = 10, b = -11, c = 0, d;
d = ++a && ++b || ++c;
printf("%d %d %d %d", a, b, c, d);
}*/

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
printf("%d",x);
}*/

/*#include <stdio.h>
int main() {
int i=4,j=-5,k;
k=~j&~i;
printf("%d",k);
}*/

/*#include <stdio.h>
int main() {int var=076;
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

/*#include <stdio.h>
int main()
{
int a=10;
printf("%d %d %d",a==5,a=5,++a);
}*/

/*#include <stdio.h>
int main()
{
int p = 3;
float q = 4.5;
printf("%d\n",sizeof(p+q));
printf("%d\n",sizeof(sizeof(6.7)));
}*/

/*#include<stdio.h>
int main()
{
unsigned char x=0x75;
int y=~x<<2;
printf("%x",y);
}*/

/*#include<stdio.h>
int main()
{
int x,y=25;
x=(y/=2) + (y=y/2);
printf("%d",x);
}*/

/*#include<stdio.h>
int main()
{
int a=6,b=5,c=1;
printf("%d",a>b>=c);
}*/

/*#include<stdio.h>
int main()
{
int x=5;
x!=x&0xfffe;
printf("%d\n",x);
x=!x&&0xee;
printf("%d\n",x);
}*/

/*#include<stdio.h>
int main()
{
float x=9/2;
float y=2.5;
float z=x+y/2;
printf("%f",z);
}*/

/*#include<stdio.h>
int main()
{
char a=-25;
a||=2;
a&&=2;
printf("%d",a);
}*/

/*#include<stdio.h>
int main()
{
printf("%x\n",-1023);
printf("%o\n",-63);
}*/

/*#include <stdio.h>
int main()
{
int i = 5;
printf("%d", ++(++i));
return 0;
}*/

/*#include <stdio.h>
int main(){
int num = 5;
num|=04<<6+1-2&0xaf;
printf("%d", num);
return 0;
}*/

/*#include <stdio.h>
int main()
{
int x,y,z,w;
x=y=z=w=12;
x*=w+4;
y+=z*=3;
printf("x=%d ,y=%d",x,y);
}*/

/*#include<stdio.h>
int main()
{
int ab=5;
ab=ab-- * ab++;
printf("%d\n",ab);
printf("%d",ab-- * ab++);
}*/

/*#include<stdio.h>
int main()
{
int a=4, b=8 ,c=3, d=9,z;
z=a++ + ++b *c-- - --d;
printf("%d %d %d %d %d",a,b,c,d,z);
}*/

/*#include<stdio.h>
int main()
{
float f=5/16,g=0.45;
int h=(f<g)<<3;
printf("%d",h);
}*/

/*#include<stdio.h>
int main()
{
int x=1,y=0;
int z=x--?y==0&&x<5:3;
printf("%d\n",z);
}*/

/*#include<stdio.h>
int main(){
int n = 12, k;
printf(“%d”, (k = sizeof( n + 12.0)));
return 0;
}*/

/*#include<stdio.h>
int main()
{
int a = 10, b = 2, c;
a = !( c = c == c) && ++b;
c += ( a + b--);
printf( “ %d %d %d”, a,b,c);
return 0;
}*/

/*#include<stdio.h>
int main()
{
int x = 012 | 0x12;
int y = 021 & 021;
printf("%d %d",x,y);
}*/

/*#include<stdio.h>
int main()
{
unsigned int x = 45 ;
char y = -23;
int z=x>y;
printf("%d ",z);
}*/

/*#include<stdio.h>
int main()
{
int r=0x3f;
int s=058;
printf("%d",r*s);
printf("%d",r/s)
}*/

/*#include <stdio.h>
int main()
{
int p=5,q=-6;
q^=p^=p-q;
p^=-p;
printf("%d %d",p,q);
}*/

/*#include<stdio.h>
int main()
{
int a = 1, b = 2, c = 3;
printf("%d", a +=(a += 3, 5, a)) ;
}*/

/*#include<stdio.h>
int main()
{
int a=10,b=20,c=30;
int res;
res=a/b?b/c?a:b:c;
printf("%d",res);
}*/

/*#include <stdio.h>
int main() {
int a=0x2<<sizeof('a')*8-1;
printf("%x\n",a);
a>>=sizeof(int)*4-1;
printf("%x\n",a);
}*/

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

#include<stdio.h>
int main()
{
int i=-7,j=8,k=10,l;
l=(++i ,++j ,++k) + ++k;
printf("%d %d %d %d\n",i,j,k,l);
}
