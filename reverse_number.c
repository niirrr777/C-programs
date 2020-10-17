/*.Write a program which accept number from user and display its digits in reverse
order.
Input :
Output : 2395
5
9
3
2
Input :
Output : 1018
8
1
0
1*/


#include<stdio.h>

int DisplayDigit(int iNo)
{
	int iDigit=0;
	
	if(iDigit<0)
	{
		iNo=-iNo;
	}
	
	while(iNo!=0)
	{
		iDigit=iNo%10 ;
		printf("%d\n",iDigit);
		iNo=iNo/10;
	}
}

int main()
{
	int iValue=0;
	
	printf("Enter  number");
	scanf("%d",&iValue);
	
	DisplayDigit(iValue);
	
	return 0;	
}	
