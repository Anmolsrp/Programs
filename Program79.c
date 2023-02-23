// 4
// a b c d
 
#include<stdio.h>

void DisplayPattern(int iNo)
{
	int iCnt = 0;
	char ch = 'a';
	
	if(iNo < 0)  //Updater
	{
		iNo = -iNo;
	}
	
	for(iCnt = 1;iCnt <= iNo;iCnt++,ch++) 
	{
		printf("%c\t",ch);
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
