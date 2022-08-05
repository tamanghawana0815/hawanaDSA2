#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
void postfixCaclu( char);
int main()
{
	char b[5]="345*+";
	postfixCalcu(b[5]);
	return 0;
}
void postfixCalcu (char exp[5])
{
	int i,n;
	char stack[5];
	int stack1[5];
	for(i=0;i<n;i++)
	{
		if(exp[i] >= '0' && exp [i] <= '9')
		{
			stack1[i]=exp[i];
		}
		else if(exp[i]=='*')
		{
			stack1[i]=stack[i+1]*stack[i];
		}
		else if(exp[i]=='+')
		{
			stack1[i+1]=stack[i+1]+stack[i];
		}
		printf("%d",stack1[i]);
	}
	return 0;
}
