// Accept n number and accept on another number and display last occurence of array

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int CheckLastOccurence(int Arr[],int iSize,int iNo)
{
	int iCnt = 0;
	
	for(iCnt = iSize - 1;iCnt >= 0 ;iCnt--)
	{
		if(Arr[iCnt] == iNo)
		{
			break;
		}
	}
	if(iCnt == -1)
	{
		return -1;
	}
	else
	{
		return iCnt;
	}
	
	
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
		printf("%d number is Occured at %d position of array",iValue,iRet);
	}

	free(ptr);
	return 0;
}
