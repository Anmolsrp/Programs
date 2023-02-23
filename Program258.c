// toggle the  5,6,7 bit
// Input 10

#include<stdio.h>

typedef unsigned int UINT;
// 0000 0000 0000 0000 0000 0000 0000 0000

// 0000 0000 0000 0000 0000 0000 0111 0000

// 00000070

// 0X00000070

UINT ToggleBit(UINT No)
{
	UINT iMask = 0X00000070;
	
	return No ^ iMask;
}
int main()
{	
	UINT Value = 0;
	UINT iRet = 0;
	
	printf("Enter the number : ");
	scanf("%d",&Value);

	iRet = ToggleBit(Value);	
		
	printf("Updated number is : %d\n",iRet);
	
	return 0;
}
