// 4
// 1  2  3  4  *  *  *  *
// Time Complexity : 2N
#include<stdio.h>

void DisplayPattern(int iNo)
{
	int iCnt = 0;
	
	if(iNo < 0)  //Updater
	{
		iNo = -iNo;
	}
	
	for(iCnt = 1;iCnt <= iNo;iCnt++) 
	{
		printf("%d\t",iCnt);
	}
	for(iCnt = 1;iCnt <= iNo;iCnt++) // serial loop
	{
		printf("*\t",iCnt);
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
