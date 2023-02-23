// Accept the number and the range from the user and toggle the bit of that range

#include<stdio.h>

typedef unsigned int UINT;

// 0000 0000 0000 0000 0000 0000 0000 0000

// Start = 7
// End = 17

// Input :  0010 1010 1010 111(0 1101 1010 01)10 1101

// Output: 	0010 1010 1010 111(1 0010 0101 10)10 1101

// Mask:    0000 0000 0000 0001 1111 1111 1100 0000

// Mask1:   1111 1111 1111 1111 1111 1111 1111 1111
// Mask2:   1111 1111 1111 1111 1111 1111 1111 1111

// Mask1 = Mask1 << (Start -1)
//			1111 1111 1111 1111 1111 1111 1100 0000

// Mask2 = Mask2 >> (32 - End)
// Mask2 = Mask2 >> 15
//          0000 0000 0000 0001 1111 1111 1111 1111

//Mask = Mask1 & Mask2
		
// Mask1		1111 1111 1111 1111 1111 1111 1100 0000
// Mask2		0000 0000 0000 0001 1111 1111 1111 1111   &
// -----------------------------------------------------
// Result      0000 0000 0000 000(1 1111 1111 11)00 0000      
              
// Result = No ^ Mask

//        0010 1010 1010 1110 1101 1010 0110 1101
//        0000 0000 0000 0001 1111 1111 1100 0000   ^
//------------------------------------------------------
//        0010 1010 1010 111(1 0010 0101 10)10 1101			   

UINT ToggleBit(UINT No,UINT Start,UINT End)
{
	UINT Mask1 = 0XFFFFFFFF;
	UINT Mask2 = 0XFFFFFFFF;
	UINT Mask = 0;
	UINT Result = 0;
	
	Mask1 = Mask1 << (Start - 1);
	Mask2 = Mask2 << (32 - End);
	Mask = Mask1 & Mask2;
	
	Result = No ^ Mask;
	return Result;		
}

int main()
{
	UINT Value = 0;
	UINT i = 0;
	UINT j = 0;
	UINT Ret = 0;
		
	printf("Enter the number : \n");
	scanf("%d",&Value);
	
	printf("Enter the starting position of bit\n");
	scanf("%d",&i);
	
	printf("Enter the ending position of bit\n");
	scanf("%d",&j);
	
	Ret = ToggleBit(Value,i,j);	
	
	printf("Updated number is %d",Ret);
	
	return 0;
}
