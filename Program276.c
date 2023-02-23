// Accept no. from the user and return the addition of digits

#include<stdio.h>

int DigitAdditionR(int No)    // recursive approach
{
   // storage class static
	static int iSum = 0;
	int iDigit = 0;
	
	if(No != 0)
	{
		iDigit = No % 10;
		iSum = iSum + iDigit;
		No = No / 10;
		DigitAdditionR(No);
	}
	return iSum;
}

int main()
{
	printf("Inside main\n");
	int Value = 0,iRet = 0;
	printf("Enter the number : \n");
	scanf("%d",&Value);
	iRet = DigitAdditionR(Value);
	printf("Addition is : %d",iRet);
	
	printf("\n\nEnd of main\n");
	return 0;
}
