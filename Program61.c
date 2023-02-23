// Accept n numbers from user and take one number and return the frequency of that number

#include<stdio.h>
#include<stdlib.h>

int CalculateFrequency(int Arr[],int iSize,int iNo)
{
	int iCnt = 0, iFrequency = 0;
	
	for(iCnt = 0;iCnt < iSize; iCnt++)
	{
		if(Arr[iCnt] == iNo)
		{
			iFrequency++;
		}
	}
	return iFrequency;
}
int main()
{
	int *ptr = NULL;
	int iLength = 0, i = 0,iValue = 0;
	int iRet = 0;
	
	printf("Enter the number of elements : ");
	scanf("%d",&iLength);
	
	ptr = (int *)malloc(iLength * sizeof(int));
	
	printf("Please enter the numbers : ");
	for(i = 0; i < iLength; i++)
	{
		scanf("%d",&ptr[i]);
	}
	
	printf("Enter the element to find out : ");
	scanf("%d",&iValue);
	
	iRet = CalculateFrequency(ptr,iLength,iValue);
	printf("Frequency of %d is %d ",iValue,iRet);
	
	free(ptr);
	
	return 0;
}
