//Accept number from user and bit position and toggle the bits
// use dynamic masking

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

// 0000 1111 0000 1111 0000 1111 0000 1111
//  0     F    0    F    0    F    0    F

// 0X0F0F0F0F

UINT ToggleBit(UINT No)
{
	UINT iMask = 0X0F0F0F0F;   // UINT iMask = ;
	
	return No & iMask;		
}

int main()
{
	UINT Value = 0;
	UINT Position1 = 0;
	UINT Position2 = 0;
	UINT Ret = 0;
		
	printf("Enter the number : \n");
	scanf("%d",&Value);
	
	printf("Enter the position 1 of bit\n");
	scanf("%d",&Position1);
	
	printf("Enter the position 2 of bit\n");
	scanf("%d",&Position2);
	
	Ret = ToggleBit(Value);	
	
	printf("Updated number is %d",Ret);
	
	return 0;
}
