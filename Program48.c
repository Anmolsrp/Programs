// Check whether number is palindrome or not

#include<stdio.h>
#include<stdbool.h>

int Reverse(int iNo)
{
	int iDigit = 0,iRev = 0;
	
	while(iNo != 0)
	{
		iDigit= iNo%10;
		iRev = (iRev * 10) + iDigit;
		iNo	= iNo/10;
		
	}
	printf("%d\n",iRev);
	return iRev;
}

bool CheckPalindrome(int iData)
{
	int iReverse = 0;
	iReverse = Reverse(iData);
	return (iReverse == iData);
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
