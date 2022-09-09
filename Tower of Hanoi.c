//Tower of Hanoi
#include<stdio.h>
#include<conio.h>
void TOH(int n1,char A, char B, char C);
void main()
{
	int n;
	printf("\nEnter the no of disks:");
	scanf("%d",&n);
	TOH(n,'O','D','T');
	getch();
}
void TOH(int n1,char A,char B, char C)
{
	if(n1>0)
	{
		TOH(n1-1,A,C,B);
		printf("\nMove disk %d from %c to %c \n",n1,A,B);
		TOH(n1-1,C,B,A);
	}
}
