// Accept n numbers from user check whether the taken  number is present or not.

#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

bool ChkNumber(int Arr[],int iSize,int iNo)
{
	int iCnt = 0 , i =0;
	
	for(iCnt = 0;iCnt < iSize; iCnt++)
	{
		if(Arr[iCnt] == iNo)
		{
			break;
		}
	}
	if(iCnt == iSize)
	{
		return false; 
	}
	else
	{
		return true;
	}
}
int main()
{
	int *ptr = NULL;
	int iLength = 0, i = 0,iValue = 0;
	int bRet = false;
	
	// enter the size of array
	printf("Enter the number of elements : ");
	scanf("%d",&iLength);
	
	// Allocate the memory 
	ptr = (int *)malloc(iLength * sizeof(int));
	
	printf("Please enter the numbers : ");
	for(i = 0; i < iLength; i++)
	{
		scanf("%d",&ptr[i]);
	}
	
	printf("Enter the number to find out the occurence : ");
	scanf("%d",&iValue);
	
	bRet = ChkNumber(ptr,iLength,iValue);
	if(bRet == true)
	{
		printf("%d Number is present ",iValue);
	}
	else
	{
		printf("%d Number is not present",iValue);

	}
	
	free(ptr);
	
	return 0;
}
