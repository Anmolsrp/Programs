// Accept number from user check it is perfect or not using recursion

#include<stdio.h>
#include<stdbool.h>

bool CheckPerfectR(int No)    // recursive approach
{
	static int iCnt = 1;   // storage class static
	static int iSum = 0;
	if(iCnt <= (No/2))
	{
		if((No % iCnt) == 0)
		{
			iSum = iSum + iCnt;
		}
		iCnt++;
		CheckPerfectR(No);
	}
	if(iSum == No)
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
	printf("Inside main\n");
	int Value = 0,bRet = false;
	printf("Enter the number : \n");
	scanf("%d",&Value);
	bRet = CheckPerfectR(Value);
	if(bRet == true)
	{
		printf("%d is perfect number\n",Value);	
	}
	else
	{
		printf("%d is not perfect number\n",Value);
	}
	
	printf("\n\nEnd of main\n");
	return 0;
}
