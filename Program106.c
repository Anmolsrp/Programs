#include<stdio.h>
#include<stdbool.h>

bool IsDigitX(char ch)
{
	if((ch >= '0') && (ch <= '9'))
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
	char cValue = '\0';
	bool bRet = false;
	
	printf("Please enter one character : \n");
	scanf("%c",&cValue);
	
	bRet = IsDigitX(cValue);
	if(bRet == true)
	{
		printf("%d is a digit\n",cValue);
	}
	else
	{
		printf("%d is not a digit\n",cValue);
	}
	
	return 0;
}
