#include<stdio.h>
#include<string.h>
char* non_alpha(char*);
char* upper_case(char*);
char* sort_str(char*);
int str_cmp(char*,char*);
int main()
{
	/*char s1[20],s2[20];
	int i,n;
	printf("enter the string 1\n");
	scanf("%s",s1);
	printf("enter the string 2\n");
	scanf("%s",s2);*/
	//char s1[30]={"ia&^*DiN^@Vec789RTO%"};
	//char s2[30]={"vec98%$^ind!@#IATO78R"};
	char s1[30]={"vector"};
	char s2[30]={"rovect"};
	int i;

	non_alpha(s1);
	non_alpha(s2);

	for(i=0;s1[i];i++);
	for(i=0;s2[i];i++);
	if(s1[i]!=s2[i])
		printf("it is not an anagram\n");

	upper_case(s1);
	upper_case(s2);

	sort_str(s1);
	sort_str(s2);

	int res = str_cmp(s1,s2);
	if(res==0)
		printf("it is an anagram\n");
	else
		printf("it is not an anagram\n");

}
char* non_alpha(char* s)
{
	int i,j;
	for(i=0;s[i];i++)
	{
		if(!(((65<=s[i])&&(s[i]<=90))||((97<=s[i])&&(s[i]<=122))))
		{
			for(j=i;s[j];j++)
			{
				s[i]=s[j+1];
				i--;
			}
		}
	}
}

char* upper_case(char* s)
{
	int i;
	for(i=0;s[i];i++)
	{
		if((97<=s[i])&&(s[i]<=122))
			s[i]=s[i]^32;
	}
}

char* sort_str(char* s)
{
	int i,j,n,temp;
	for(n=0;s[n];n++);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(s[i]>s[j])
			{
				temp=s[i];
				s[i]=s[j];
				s[j]=temp;
			}
		}
	}
}

int str_cmp(char* s1,char* s2)
{
	int i;
	for(i=0;(s1[i])&&(s1[i]==s2[i]);i++);
	return s1[i]-s2[i];
}
