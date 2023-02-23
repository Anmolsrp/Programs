// Accept n numbers from the users and perform there addition

#include<stdio.h>

int Summation(int iData[],int iSize)
{
	int iCnt = 0,iSum = 0;
	
	for(iCnt = 0; iCnt < iSize ; iCnt++)
	{
		iSum = iSum + iData[iCnt];
	}
	return iSum;
}

int main()
{
	int iArr[5];
	int iCnt = 0, iRet = 0;
	
	printf("Enter the elements : \n");
	
	for(iCnt = 0;iCnt < 5;iCnt++)
	{
		scanf("%d",&iArr[iCnt]);
	}
	
	iRet = Summation(iArr,5);
	printf("Addition of all elements is : %d\n",iRet);
	
	return 0;
}
