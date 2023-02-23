// Display non factors of a number
#include<stdio.h>

// O(N/2) order of N/2  (Big O Of N/2)

int SumNonFactors(int iNo)
{
	int iCnt = 0,iSum = 0;
	
		for(iCnt = 1;iCnt < iNo;iCnt++)
		{
			if((iNo % iCnt) != 0)
			{
				iSum = iSum + iCnt;
			}
		}
		return iSum;
}

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter the number : \n");
	scanf("%d",&iValue);
	
	iRet = SumNonFactors(iValue);
	printf("Addition of %d non factors are : %d",iValue,iRet);
	return 0;
} 

// gcc Program32.c -o Program32exe
