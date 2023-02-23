//Check whether the number is perfect number or not

#include<stdio.h>
#include<stdbool.h>

// O(N/2) order of N/2  (Big Of N/2)
bool DisplayPerfect(int iNo)
{
	int iCnt = 0;
	int iSum = 0;
	
		for(iCnt = 1;iCnt <= (iNo/2);iCnt++)
		{
			if((iNo % iCnt) == 0)
			{
				iSum = iSum + iCnt;
			}
		}
		if(iSum == iNo)
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
	bool bRet = false;
	
	printf("Enter the number : \n");
	scanf("%d",&iValue);
	
	bRet = DisplayPerfect(iValue);
	if(bRet == 1)
	{
		printf("It is perfect number ");
	}
	else
	{
		printf("It is not perfect number");
	}
	
	
	return 0;
} 
