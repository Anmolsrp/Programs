// Accept a number and return the reverse of the number

#include<stdio.h>

int CountDigits(int iNo)
{
	int iDigit = 0,iReverse = 0;
	
	while(iNo > 0)
	{
		iDigit= iNo%10;
		iReverse = (iReverse * 10) + iDigit;
		iNo	= iNo/10;
		
	}
	return iReverse;

}
int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter number : \n");
	scanf("%d",&iValue);
	
	iRet = CountDigits(iValue);
	printf("Reverse number is :%d ",iRet);

	return 0;
}
