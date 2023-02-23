// Accept n numbers from user and display maximum number

#include<stdio.h>
#include<stdlib.h>

int DisplayMinimum(int Arr[],int iSize)
{
	int iCnt = 0,iMin = 0;
	iMin = Arr[iCnt];
	
	for(iCnt = 0;iCnt < iSize;iCnt++)
	{
		if(iMin > Arr[iCnt])
		{
			iMin = Arr[iCnt];
		}
	}
	return iMin;
}
int main()
{
	int *ptr = NULL;
	int iLength = 0,i = 0;
	int iRet = 0;
	
	printf("Enter the number of elements : ");
	scanf("%d",&iLength);
	
	ptr = (int *)malloc(iLength * sizeof(int));
	
	printf("Please enter the number : \n");
	for(i = 0;i < iLength; i++)
	{
		scanf("%d",&ptr[i]);
	}
	
	iRet = DisplayMinimum(ptr, iLength);
	printf("Smallest number in array is : %d ",iRet);

	free(ptr);
	return 0;
}
