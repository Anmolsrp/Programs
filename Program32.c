// Display non factors of a number
#include<stdio.h>

// O(N/2) order of N/2  (Big O Of N/2)

void DisplayNonFactors(int iNo)
{
	int iCnt = 0,iSum = 0;
	
	printf("Non factors of %d are :\n",iNo);
		for(iCnt = 1;iCnt < iNo;iCnt++)
		{
			if((iNo % iCnt) != 0)
			{
				printf("%d\n",iCnt);
			}
		}
}

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter the number : \n");
	scanf("%d",&iValue);
	
	DisplayNonFactors(iValue);

	return 0;
} 

// gcc Program32.c -o Program32exe
