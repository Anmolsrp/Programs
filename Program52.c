//Accept a number and return the minimum/smallest digit in a number (751) (7)

#include<stdio.h>

int MinDigit(int iNo)
{
	int iDigit = 0,iMin = 9;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	while(iNo != 0)
	{
		iDigit = iNo % 10;
		//iMin = iDigit;
		if(iDigit < iMin)
		{
			iMin = iDigit;
		}
		if(iMin == 0)  //optimization
		{
			break;
		}
		iNo = iNo / 10;
	}
	return iMin;
}
int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter the number : \n");
	scanf("%d",&iValue);
	
	iRet = MinDigit(iValue);
	printf("Minimum digit in %d number is : %d",iValue,iRet);
	
	return 0;
}
