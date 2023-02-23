// 22nd bit is ON or OFF

#include<stdio.h>
#include<stdbool.h>

// 10th bit

typedef unsigned int UINT;
//
// 0000 0000 0000 0000 0000 0000 0000 0000

// 0000 0000 0010 0000 0000 0000 0000 0000

//   0    0   2     0    0    0    0   0
// 00200000
// 0X00200000

bool CheckBit(UINT No)
{
	UINT iMask = 0X00200000;
	UINT Result = 0;
	
	Result = No & iMask;
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
	int ipos = 0;
	bool bRet = false;
	
	printf("Enter the number : ");
	scanf("%d",&Value);

	bRet = CheckBit(Value,ipos);	
	if(bRet == false)
	{
		printf("10th bit is ON\n");	
	} 
	else
	{
		printf("10th bit is OFF\n");	
	}	
	
	return 0;
}
