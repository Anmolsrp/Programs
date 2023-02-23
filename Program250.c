// Accept number from user and check whether the fourth bit of number is ON or OFF
// Do the masking to hide the other bits

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool CheckBit(UINT No)
{
	UINT iMask = 8;  // binary of 8 = 1000
	UINT Result = 0;  
	
	Result = No & iMask;   //  00001000 = 00001101 & 00001000 
	
	if(Result == iMask)
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
	UINT Value = 0;
	bool bRet = false;
	
	printf("Enter the number : ");
	scanf("%d",&Value);
	
	bRet = CheckBit(Value);
	if(bRet == true)
	{
		printf("4th bit is ON\n");	
	}
	else
	{
		printf("4th bit is OFF\n");
	}
	
	return 0;
}
