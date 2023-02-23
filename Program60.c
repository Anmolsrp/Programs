// Accept n numbers from user and perform the summation of even elements and Odd elements 

#include<stdio.h>
#include<stdlib.h>

void DisplayEvenOddSum(int Arr[],int iSize)
{
	int iCnt = 0 , iEvenSum = 0 , iOddSum = 0;
	
	for(iCnt = 0 ; iCnt < iSize ; iCnt++ )
	{
		if((Arr[iCnt] % 2) == 0)
		{
			iEvenSum = iEvenSum + Arr[iCnt];
		}
		else
		{
			iOddSum = iOddSum + Arr[iCnt];
		}
	}
	
	printf("Summation of Even elements : %d\n",iEvenSum);
	printf("Summation of Odd elements : %d\n",iOddSum);
}

int main()
{
	int *ptr = NULL;
	int iLength = 0,i = 0;
	
	printf("Enter the number of elements : ");
	scanf("%d",&iLength);
	
	ptr = (int *)malloc(iLength * sizeof(int));
	
	printf("Please enter the numbers : ");
	for(i = 0;i < iLength;i++)
	{
		scanf("%d",&ptr[i]);
	}
	
	DisplayEvenOddSum(ptr, iLength);
	
	free(ptr);
	return 0;
}
