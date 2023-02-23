// 12th bit is ON or OFF

#include<stdio.h>
#include<stdbool.h>

// 10th bit

typedef unsigned int UINT;
//
// 0000 0000 0000 0000 0000 0000 0000 0000

// 0000 0000 0000 0000 0000 0001 1100 0000

//   0    0   0     0    0    1    C   0
// 000001C0
// 0X000001C0

bool CheckBit(UINT No)
{
	UINT iMask = 0X000001C0;
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
	bool bRet = false;
	
	printf("Enter the number : ");
	scanf("%d",&Value);

	bRet = CheckBit(Value,ipos);	
	if(bRet == true)
	{
		printf("10th bit is ON\n");	
	} 
	else
	{
		printf("10th bit is OFF\n");	
	}	
	
	return 0;
}
