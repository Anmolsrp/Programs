
#include<stdio.h>

int Summation()
{
	
	int iNo1 = 1;
	int iNo2 = 2;
	int iNo3 = 3;
	int iNo4 = 4;
	int iNo5 = 5;

	int iSum = 0;
	iSum = iNo1 + iNo2 + iNo3 + iNo4 + iNo5;
	return iSum;
}

int main()
{
	int iRet = 0;
	
	iRet = Summation();
	printf("Addition of numbers is  %d : ",iRet);
	
	return 0;
}
