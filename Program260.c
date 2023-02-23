//Accept number from user and bit position and check whexther the bit is ON or OFF
// use dynamic masking

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool CheckBit(UINT No, UINT Pos1,UINT Pos2)
{
	UINT iMask1 = 0X00000001;   // UINT iMask = 1;
	UINT iMask2 = 0X00000001;
	UINT iMask = 0;
	UINT Result = 0;
	
	if((Pos1 < 1) || (Pos1 > 32) || (Pos2 < 1) || (Pos2 > 32))
	{
		printf("Invalid position, it should between 1 to 32\n");
		return false;
	}
	
	iMask1 = iMask1 << (Pos1 - 1); // Dynamic Mask Formation
	iMask2 = iMask2 << (Pos2 - 1);
	
	iMask = iMask1 | iMask2;
	Result = No & iMask;
	
	if((Result == iMask)) 
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
	UINT Position1 = 0;
	UINT Position2 = 0;
	bool bRet =  false;
		
	printf("Enter the number : \n");
	scanf("%d",&Value);
	
	printf("Enter the position 1 of bit\n");
	scanf("%d",&Position1);
	
	printf("Enter the position 2 of bit\n");
	scanf("%d",&Position2);
	
	bRet = CheckBit(Value,Position1,Position2);	
	if(bRet == true)
	{
		printf("Bit at the position %d and %d is ON",Position1,Position2);
	}
	else
	{
		printf("Bit at the position %d and %d is OFF",Position1,Position2);
	}
	
	return 0;
}
