
#include<stdio.h>

int Summation(int iNo)
{
	int iCnt = 0;
	int iSum = 0;
	for(iCnt=1;iCnt <= iNo;iCnt++)
	{
		iSum = iSum + iCnt;
	}
	return iSum;
}

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter the number : ");
	scanf("%d",&iValue);
	
	iRet = Summation(iValue);
	printf("Addition of numbers is  %d : ",iRet);
	
	return 0;
}
