//Display even and odd digit's count in a number (123) (even = 1) (odd = 2)  

#include<stdio.h>
void CountEvenDigits(int iNo)
{
	int iEvenCnt = 0,iOddCnt = 0,iDigit = 0;
	
	if(iNo == 0)
	{
		iEvenCnt++;
	}
	
	while(iNo != 0)
	{
		iDigit = iNo % 10;
		if((iDigit % 2) == 0)
		{
			iEvenCnt++;
		}
		else
		{
			iOddCnt++;
		}
		iNo = iNo / 10;
	}
		printf("Number of even digits are : %d\n",iEvenCnt);
		printf("Number of odd digits are : %d\n",iOddCnt);
}
int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter the number : \n");
	scanf("%d",&iValue);
	
	CountEvenDigits(iValue);
	
	return 0;
}
