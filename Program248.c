#include<stdio.h>

typedef unsigned int UINT;  // industrial way for unsigned int

int CountOnBits(UINT No)
{
	int iCnt = 0,iDigit = 0;
	
	while(No != 0)
	{
		iDigit = No % 2;
		if(iDigit == 1)
		{
			iCnt++;
		}
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
