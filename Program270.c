// Input - 4
// 4 * 3 * 2 * 1 = 24 // factorial

#include<stdio.h>

int FactorialR(int No)    // recursive approach
{
	static int iCnt = 1;  // storage class static
	static int Fact = 1;	
	if(iCnt <= No)
	{
		Fact = Fact * iCnt;
		iCnt++;
		FactorialR(No); // Recursive Call
	}
	return Fact;
}
int main()
{
	printf("Inside main\n");
	int iRet = 0;
	int Value = 0;
	printf("Enter the number : \n");
	scanf("%d",&Value);
	iRet = FactorialR(Value);
	printf("Factorial is : %d",iRet);
	printf("\n\nEnd of main\n");
	return 0;
}
