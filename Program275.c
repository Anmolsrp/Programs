// Accept no. from the user and count the digits

#include<stdio.h>

int CountDigitsR(int No)    // recursive approach
{
	static int iCnt = 0;   // storage class static
	if(No != 0)
	{
		iCnt++;
		No = No/10;
		CountDigitsR(No);
	}
	return iCnt;
}

int main()
{
	printf("Inside main\n");
	int Value = 0,iRet = 0;
	printf("Enter the number : \n");
	scanf("%d",&Value);
	iRet = CountDigitsR(Value);
	printf("Number of digits is : %d",iRet);
	
	printf("\n\nEnd of main\n");
	return 0;
}
