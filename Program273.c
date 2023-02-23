// Accept number form user and return sum of factors

#include<stdio.h>

int FactorsR(int No)    // recursive approach
{
	static int iCnt = 1;   // storage class static
	static int iSum = 0;
	if(iCnt <= (No/2))
	{
		if((No % iCnt) == 0)
		{
			iSum = iSum + iCnt;
		}
		iCnt++;
		FactorsR(No);
	}
	return iSum;
}

int main()
{
	printf("Inside main\n");
	int Value = 0,iRet = 0;
	printf("Enter the number : \n");
	scanf("%d",&Value);
	iRet = FactorsR(Value);
	printf("Addition of factors is : %d",iRet);
	printf("\n\nEnd of main\n");
	return 0;
}
