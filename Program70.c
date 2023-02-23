// Accept n number and return the last index of the array

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int CheckLastOccurence(int Arr[],int iSize,int iNo)
{
	int iCnt = 0,iPos = -1;
	
	for(iCnt = 0;iCnt < iSize ;iCnt++)
	{
		if(Arr[iCnt] == iNo)
		{
			iPos = iCnt;
		}
	}
	return iPos;
}
int main()
{
	int *ptr = NULL;
	int iLength = 0,i = 0;
	int iRet = 0,iValue = 0;
	
	printf("Enter the number of elements : ");
	scanf("%d",&iLength);
	
	ptr = (int *)malloc(iLength * sizeof(int));
	
	printf("Please enter the number : \n");
	for(i = 0;i < iLength; i++)
	{
		scanf("%d",&ptr[i]);
	}
	
	printf("Enter the number to find out : \n");
	scanf("%d",&iValue);
	
	iRet = CheckLastOccurence(ptr,iLength,iValue);
	if(iRet == -1)
	{
		printf("There is no %d in array\n",iRet);
	}
	else
	{
		printf("%d number is last Occured at %d position of array ",iValue,iRet);
	}

	free(ptr);
	return 0;
}
