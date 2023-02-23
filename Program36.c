// Display 5 to 1

#include<stdio.h>

void DisplayReverse(int iNo)
{
	int iCnt = 0;
	
	printf("_______________________________\n\n");
	iCnt = iNo;
	while(iCnt >= 1)
	{
		printf("%d\t",iCnt);	
		iCnt--;
	}	
	printf("\n------------------------------\n");
}

int main()
{
	int iValue = 0;
	
	printf("Enter the number : ");
	scanf("%d",&iValue);
	
	DisplayReverse(iValue);
	
	return 0;	
}
