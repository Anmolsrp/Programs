//  INPUT = 4
// 4
// 3
// 2
// 1

#include<stdio.h>

void DisplayPattern(int iNo)
{
	int iCnt = 0;
	
	if(iNo < 0)  //Updater
	{
		iNo = -iNo;
	}
	
	for(iCnt = iNo;iCnt >= 1;iCnt--)
	{
		printf("%d\n",iCnt);
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
