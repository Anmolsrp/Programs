// Display the sum of given number (751) (13)
//Input : 751
//Output : 3

#include<stdio.h>

int CountDigits(int iNo)
{
	int iDigit = 0,iSum = 0;
	
	if(iNo == 0) // filter
	{
		return 1;	
	}
	
	if(iNo < 0)  // updater
	{
		iNo = -iNo;
	}
	
	while(iNo > 0)
	{
		iDigit= iNo % 10;
		iSum = iSum + iDigit;
		iNo	= iNo/10;
	}
	return iSum;

}
int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter number : \n");
	scanf("%d",&iValue);
	
	iRet = CountDigits(iValue);
	printf("Sum of digits of %d decimal number is :%d ",iValue,iRet);

	return 0;
}
