#include<stdio.h>

typedef unsigned int UINT;  // industrial way for unsigned int

int CountOnBits(UINT No)
{
	int iCnt = 0,Digit = 0;
	
	while(No != 0)
	{
		Digit = No % 2;
		iCnt = iCnt + Digit;
		No = No / 2;	
	}
	return iCnt;	
}

int main()
{
	UINT Value = 0;
	int Ret = 0;
	
	printf("Enter the number : ");
	scanf("%d",&Value);
	
	Ret = CountOnBits(Value);
	
	printf("Number of bits which are ON are : %d\n",Ret);
	 
	return 0;
}
