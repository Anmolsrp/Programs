//Accept number and the the bit position from the user and check whether the bit is ON or OFF
// This is called dynamic masking

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool CheckBit(UINT No,int pos)
{
	UINT iMask = 512;
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
	
	printf("Enter the position : ");
	scanf("%d",&ipos);

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
