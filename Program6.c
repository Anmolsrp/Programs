#include<stdio.h>
#include "Program6Multi.c"

int main()
{
	int iValue1 = 0 , iValue2 = 0 , iRet = 0;
	
	printf("Enter the first number : ");
	scanf("%d",&iValue1);
	
	printf("Enter the second number : ");
	scanf("%d",&iValue2);
	
	iRet = Multiplication(iValue1,iValue2);
	
	printf("Miltiplication is : %d",iRet);
	
	return 0;
}
