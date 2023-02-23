#include<stdio.h>

int Multiplication(int iNo1,int iNo2)    // product provider
{
	int iAns = 0;
	
	iAns = iNo1 * iNo2;
	
	return iAns;
}

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
