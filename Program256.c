// OFF the  4TH bit
// Input 10

#include<stdio.h>

typedef unsigned int UINT;
// 0000 0000 0000 0000 0000 0000 0000 0000

// 1111 1111 1111 1111 1111 1111 1111 0111

// 0XFFFFFFF7

UINT OffBit(UINT No)
{
	UINT iMask = 0XFFFFFFF7;
	
	return No & iMask;
}
int main()
{	
	UINT Value = 0;
	UINT iRet = 0;
	
	printf("Enter the number : ");
	scanf("%d",&Value);

	iRet = OffBit(Value);	
		
	printf("Updated number is : %d\n",iRet);
	
	return 0;
}
