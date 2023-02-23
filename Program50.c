// Check whether number is palindrome or not

#include<stdio.h>
#include<stdbool.h>

bool CheckPalindrome(int iNo)
{
	int iCnt = 0,iDigit = 0,iReverse = 0,iTemp = 0;
	iTemp = iNo;
	
	for(iReverse = 0;iNo != 0; iNo = iNo /10)
	{
		iDigit= iNo%10;
		iReverse = (iReverse * 10) + iDigit;
	}
	if(iReverse == iTemp)
	{
		return true;
	}
	else
	{
		return false;
	}

}
int main()
{
	int iValue = 0;
	bool iRet = false;
	
	printf("Enter number : \n");
	scanf("%d",&iValue);
	
	iRet = CheckPalindrome(iValue);
	if(iRet == true)
	{
		printf("Number is palindrome");
	}
	else
	{
		printf("Number is not palindrome");
	}

	return 0;
}
