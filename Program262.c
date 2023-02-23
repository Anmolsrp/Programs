//Accept number from user and bit position and make bit OFF
// use dynamic masking

#include<stdio.h>

typedef unsigned int UINT;

// 1111 1111 1111 1111 1111 1111 1111 0111
//  F     F    F    F    F    F    F    7

// 0XFFFFFFF7

UINT OffBit(UINT No,UINT Pos)
{
	UINT iMask = 0X00000001;   // UINT iMask = 1;
	iMask = iMask << (Pos - 1);
	
	iMask = ~iMask;
	
	return No & iMask;		
}

int main()
{
	UINT Value = 0;
	UINT Position = 0;
	UINT Ret = 0;
		
	printf("Enter the number : \n");
	scanf("%d",&Value);
	
	printf("Enter the position of bit\n");
	scanf("%d",&Position);
	
	Ret = OffBit(Value,Position);	
	
	printf("Updated number is %d",Ret);
	
	return 0;
}

/* 
No = 1 0 1 0 1 1 1 0

Pos = 6
iMask = 0 0 0 0 0 0 0 1
iMask = iMask << 5

iMask = 0 0 1 0 0 0 0 0

iMask = ~iMask;

iMask = 1 1 0 1 1 1 1 1

No       1 0 1 0 1 1 1 0
iMask    1 1 0 1 1 1 1 1   &
------------------------------------
Result   1 0 0 0 1 1 1 0
*/		  
