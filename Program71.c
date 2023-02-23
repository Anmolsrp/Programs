// Pattern Printing start
// 5
// * * * * *

#include<stdio.h>

void DisplayPattern(int iNo)
{
	int iCnt = 0;
	
	for(iCnt = 1;iCnt <= iNo;iCnt++)
	{
		printf("*\t");
	}
}
int main()
{
	int iValue = 0;
	
	printf("Enter the number : ");
	scanf("%d",&iValue);
	
	DisplayPattern(iValue);
	
	return 0;
}
