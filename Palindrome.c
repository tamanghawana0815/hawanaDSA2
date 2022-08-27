//palindrome using recursion
#include<stdio.h>
#include<conio.h>
int pali(int x);
int main()
{
	int n,result;
	printf("\nEnter a number to check palindrome :");
	scanf("%d",&n);
	result=pali(n);
	if(n==result)
	{
		printf("\nThe given number %d is palindrome. ",n);
	}
	else
	{
		printf("\nThe given number %d is not palindrome.",n);
	}
	return 0;
}
int pali(int x)
{
	int rev=0,rem=0;
	while(x!=0)
	{
		rem=x%10;
		rev=rev*10+rem;
		x=x/10;
	}
	return rev;
}
