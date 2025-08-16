/*#include<stdio.h>
int main()
{
int num=45;
if(num>>3&4)
num=num<<2;
else
num=num>>5;
printf("%d",num);
}*/

/*#include<stdio.h>
int main()
{
int r,s=25;
if(r++=s++)
printf("%d",r);
else
printf("%d",s);
}*/

/*#include<stdio.h>
int main()
{
int x=-1;
if(x)
{
x=1;
if(!x)
printf("Joy");
else
printf("Happy");
}
else
{
printf("Blissful");
}
}*/

/*#include<stdio.h>
int main()
{
char ch=259;
int x=2;
if(ch == ++x )
printf("ABC");
else
printf("DEF");
}*/

/*#include <stdio.h>
int main() {
int a=20,b=6;
if(a=5)
b++;
printf("%d %d",++a,b++);
}*/

/*#include<stdio.h>
int main()
{
int x= 99,y=87;
if(y++,x > 100);
printf("Hello");
printf("Hi");
}*/

/*#include <stdio.h>
int main() {
int val1,val2=100,num=500;
if(val1=val2%2)
num=200;
printf("%d %d %d",val1,val2,num);
}*/

/*#include<stdio.h>
int main()
{
int x = 0;
if (x == 1)if (x >= 0)
printf("true\n");
else
printf("false\n");
}*/

/*#include<stdio.h>
int main(){
int i = 0, j = 1, k = 0;
if(++k, j, i++)
printf("%d %d %d", i, j, k);
return 0;
}*/

/*#include<stdio.h>
int main()
{
int i = 65;
switch(i)
{
case 65:
printf("Integer 65");
break;
case 'A':
printf("Char 65");
break;
default:
printf("Bye");
}
return 0;
}*/

/*#include<stdio.h>
int main()
{
int i = 5, j = 6, k = 7;
if(i > j == k)
printf("%d %d %d", i++, ++j, --k);
else
printf("%d %d %d", i, j, k);
return 0;
}*/

/*#include<stdio.h>
int main()
{
int i = 5;
if(i = i - 5 > 4)
printf("inside if block");
else
printf("inside else block");
return 0;
}*/

/*#include<stdio.h>
int main()
{
switch(2/2)
{
case 1:
printf("case 1 executed ");
case 2:
printf("case 2 execcuted ");
break;
default:
printf("Default block executed");
}
return 0;
}*/


/*#include<stdio.h>
int main()
{
printf("%d ", 1);
goto l1;
printf("%d ", 2);
l1:goto l2;
printf("%d ", 3);
l2:printf("%d ", 4);
}*/


/*#include<stdio.h>
int main()
{
int i = 0;
if (i == 0){
printf("Hello");
continue;
}
}*/

/*#include<stdio.h>
int main()
{
int i=10,j=20;
if(i++,i++,j<20)
{
printf("hai");
goto l;
}
else
printf("hi");
l:printf(" %d",i);
}*/

/*#include<stdio.h>
int main()
{
int a=0,b=2,c=3,d=1;
if(b|a&&d)
printf("hai\n");
if(a|--d&&c)
printf("hello");
else
printf("bye");
}*/


/*#include<stdio.h>
int main()
{
int a=5,b=6;
switch(a&b)
{
case 2+2:printf("One");
case 5*1 :printf("Two");break;
case 20/5-1:printf("Three");
default:printf("def");break;
}
}*/

/*#include<stdio.h>
int main()
{
int res=1;
switch(res/5)
{
case 1:printf("case 1");
case 0:printf("case 0");
case 2:printf("case 2");break;
default:printf("def");
}
}*/

/*#include<stdio.h>
int main()
{
int p=-1;
p>>=2;
if(p&~p<<3)
printf("if");
else if(p)
printf("else if");
else
printf("else");
}*/

/*#include<stdio.h>
int main()
{
int a=10;
if(a-=a*a-a)
printf("Good\n");
else
printf("Better\n");
printf("%d",a);
}*/

/*#include<stdio.h>
int main()
{
int c=55.0;
switch(c)
{
case 54:printf("English");
break;
case 55.0:printf("Maths");
break;
}
}*/

/*#include<stdio.h>
int main()
{
float f=5.6;
if(f==5.6)
printf("hi\n");
else if(f==(float)5.6)
printf("hello\n");
else if(f==5.6f)
printf("hai");
}*/

/*#include<stdio.h>
int main()
{
int i=0,l=10;label:
i+=2;
printf("%d ",i);
if(i++<l)
goto label;
printf("%d ",i);
}*/

/*#include<stdio.h>
int main()
{
int c=55.0;
switch(c)
{
case 54:printf("English");
break;
case 55.0:printf("Maths");
break;
}
}*/

/*#include<stdio.h>
int main()
{
int s=5;
s*s:printf("Hi ");
printf("Hello\n");
if(8>>3+5)
goto s*s;
}*/

/*#include<stdio.h>
int main()
{
char a='A',b='B';
q:
printf("%c",a-18);
printf("%c\n",b-19);
break;
goto q;
}*/

/*#include<stdio.h>
int main()
{
int num='1';
switch(--num,num++)
{
default:printf("default\n");
case 47:printf("case 47\n");
case 48:printf("case 48\n");
case 49:printf("case 49\n");
}
}*/

/*#include<stdio.h>
int main()
{
if('\0')
{printf("hi");
printf("hello");}
else
printf("bye");
}*/

/*#include<stdio.h>
int main()
{
int a = 1;
if(a--)
printf("A");
if(a++)
printf("B");if(!a)
printf("C");
if(!!a)
printf("D");
}*/

/*#include<stdio.h>
int main()
{
int x1=5,x2=6,x3=6;
if(x1<x2>>1)
printf("yes");
if(x3<=x2>>0)
if(x1=3,x2=0)
printf("%d",x2);
else
printf("%d",x1);
}*/

/*#include<stdio.h>
int main()
{
double d=12.7;
int i=d;
switch(d++,i++)
{
case 10:printf("One");
case 11:printf("Two");
case 12:printf("Three");
}
}*/

/*#include<stdio.h>
int main()
{
int a=5;
label1:
if(a--,++a)
printf("%d ",a);
a++;
if(a==10)
goto label2;
goto label1;label2:
a/=a+3;
printf("%d",a);
}*/

/*#include<stdio.h>
int main()
{
if((sizeof(0)==sizeof('0')))
printf("Equal");
else
printf("Not equal");
}*/

/*#include<stdio.h>
int main()
{
l:
goto m;
s:
printf("hi");
m:
goto s;
}*/

/*#include<stdio.h>
int main()
{
int i=5,j=6;
if(i++<--j)
if(0,--i>j++,i-=5)
printf("c");
else if(++i)
printf("c++");
else
printf("python");
}*/

/*#include<stdio.h>
int main()
{
int i = 0;
switch(++i){
case 0 : i++;
case 1 : i++ +2;
case 2 : ++i;
}
printf("%d",i++);
return 0;
}*/

/*#include<stdio.h>
int main()
{
switch(25)
{
case 25L:
printf("25L");
break;
case 26:
printf("26");
break;
default:
printf("Nothing");
break;
}
return 0;
}*/

/*#include<stdio.h>
int main(){
int n = 4;
switch(n)
{
case 1:
printf("Hai case 1 ");
default:
printf("Hai default ");
case 2:
printf("Hai case 2 ");
case 3:
printf("Hai case 3 ");
}return 0;
}*/

/*#include<stdio.h>
int main()
{
int m=10,n=20;
if(m/n/m)
goto o;
printf("Operating ");
o:
printf("System\n");
}*/

/*#include <stdio.h>
int main()
{
int a = 1, b = 1;
switch (a)
{
case a*b:
printf("yes ");
case a-b:
printf("no\n");
break;
}
}*/

/*#include<stdio.h>
int main(){
switch(true)
case true:
printf("Hai. This is True");
break;
case false:
printf("Hai. This is False");break;
default:
printf("Bye.");
break;
return 0;
}*/

/*#include <stdio.h>
int main()
{
printf("%d ",1);
goto l1;
printf("%d ", 2);
l1:l2:
printf("%d\n", 3);
goto l2;
}*/

/*#include <stdio.h>
int main()
{
int i = 0;
if (i == '0')
{
goto label;
}
label: printf("Hello");
}*/

/*#include<stdio.h>
int main()
{
int m=15,n=25,p=0;
if(1>0?m<n?m++,n++:m++,p++:m++,p++)
printf("true\n");
printf("%d %d %d",m,n,p);
}*/

/*#include<stdio.h>
int main()
{
int i = 0;
if(++i){
i == --i?i = 0:i = 1;
}
printf("%d", i);
return 0;
}*/

/*#include<stdio.h>
int main()
{
int c=55.0;
switch(c)
{
case 54:printf("English");
break;
case 55.0:printf("Maths");
break;
}
}*/
