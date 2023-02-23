//Display even digit's count in a number (123) (1) 

#include<stdio.h>
int CountEvenDigits(int iNo)
{
	int iEvenCnt = 0,iDigit = 0;
	
	if(iNo == 0)
	{
		return 1;
	}
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	while(iNo != 0)
	{
		iDigit = iNo % 10;
		if((iDigit % 2) == 0)
		{
			iEvenCnt++;	
		}
		iNo = iNo / 10;
	}
	return iEvenCnt;
}
int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter the number : \n");
	scanf("%d",&iValue);
	
	iRet = CountEvenDigits(iValue);
	printf("Even digits in a %d decimal number : %d",iValue,iRet);

	return 0;
}
