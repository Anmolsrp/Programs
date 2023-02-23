// Input - 4
// 4 + 3 + 2 + 1 = 10

#include<stdio.h>

int AdditionI(int No)    // iterative approach
{
	auto int Sum = 0;
	auto int iCnt = 1;   // storage class auto
	
	while(iCnt <= No)
	{
		Sum = Sum + iCnt;
		iCnt++;
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
	iRet = AdditionI(Value);
	printf("Addition is : %d",iRet);
	printf("\n\nEnd of main\n");
	return 0;
}
