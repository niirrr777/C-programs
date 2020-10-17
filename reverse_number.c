/*.Write a program which accept number from user and display its digits in reverse
order.
Input :2395
Output : 5932
Input :1018
Output : 8101
*/


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
