// Problems on digits
// Display digits count in a number (751) (3) 
//Input : 751
//Output : 3

//Input : 7515
//Output : 4

//Input : 75
//Output : 2

#include<stdio.h>

int CountDigits(int iNo)
{
	int iCnt = 0;
	//int iDigit = 0;
	
	while(iNo > 0)
	{
		//iDigit= iNo%10;
		iNo	= iNo/10;
		iCnt++;
	}
	return iCnt;

}
int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter number : \n");
	scanf("%d",&iValue);
	
	iRet = CountDigits(iValue);
	printf("Number of digits in %d decimal number is :%d ",iValue,iRet);

	return 0;
}
