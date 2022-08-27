//fibonacci series using recursion
#include<stdio.h>
#include<conio.h>
int recu(int x);
int main()
{
	int n,i;
	printf("\nEnter the number :");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\t%d",recu(i));
	}
	return 0;
}
int recu(int x)
{
	if(x==0)
	{
		return 0;
	}
	else if(x==1)
	{
		return 1;
	}
	else
	{
		return (recu(x-1)+recu(x-2));
		
	}
}
