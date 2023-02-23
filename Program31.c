//Check whether the number is perfect number or not

#include<stdio.h>
#include<stdbool.h>

// O(N/2) order of N/2  (Big O Of N/2)

bool CheckPerfect(int iNo)
{
	int iCnt = 0,iSum = 0;
	
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
	
	bRet = CheckPerfect(iValue);
	if(bRet == true)
	{
		printf("%d is perfect number ",iValue);
	}
	else
	{
		printf("%d is not perfect number",iValue);
	}
	
	
	return 0;
} 
