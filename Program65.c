// Accept n numbers from user and display maximum number

#include<stdio.h>
#include<stdlib.h>

int DisplayMaximum(int Arr[],int iSize)
{
	int iCnt = 0,iMax = 0;
	iMax = Arr[iCnt];
	
	for(iCnt = 0;iCnt < iSize;iCnt++)
	{
		if(iMax < Arr[iCnt])
		{
			iMax = Arr[iCnt];
		}
	}
	return iMax;
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
	for(i = 0;i < iLength; i++)
	{
		printf("%d ",ptr[i]);
	}
	
	iRet = DisplayMaximum(ptr, iLength);
	printf("Maximum number in array is : %d ",iRet);

	free(ptr);
	return 0;
}
