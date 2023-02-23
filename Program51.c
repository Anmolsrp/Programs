//Accept a number and return the maximum digit in a number (751) (7)

#include<stdio.h>

int MaxDigit(int iNo)
{
	int iDigit = 0,iMax = 0;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	while(iNo != 0)
	{
		iDigit = iNo % 10;
		if(iMax < iDigit )
		{
			iMax = iDigit;
		}
		if(iMax == 9)  // optimization
		{
			break;
		}
		iNo = iNo / 10;
	}
	return iMax;
}
int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter the number : \n");
	scanf("%d",&iValue);
	
	iRet = MaxDigit(iValue);
	printf("Maximum digit in %d number is : %d",iValue,iRet);
	
	return 0;
}
