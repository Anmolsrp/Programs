// Display 5 to 1

#include<stdio.h>

void DisplayReverse(int iNo)
{
	int iCnt = 0;
	
	printf("_______________________________\n\n");
	for(iCnt = iNo;iCnt >= 1;iCnt--)
	{
		printf("%d\t",iCnt);	
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
