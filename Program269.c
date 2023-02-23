// Input - 4
// 4 + 3 + 2 + 1 = 10

#include<stdio.h>

int AdditionR(int No)    // recursive approach
{
	static int iCnt = 0;  // storage class static
	static int Sum = 0;	
	if(iCnt <= No)
	{
		Sum = Sum + iCnt;
		iCnt++;
		AdditionR(No); // Recursive Call
	}
	return Sum;
}
int main()
{
	printf("Inside main\n");
	int iRet = 0;
	int Value = 0;
	printf("Enter the number : \n");
	scanf("%d",&Value);
	iRet = AdditionR(Value);
	printf("Addition is : %d",iRet);
	printf("\n\nEnd of main\n");
	return 0;
}
