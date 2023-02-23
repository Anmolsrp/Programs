// Accept n number from user and return the count of even numbers. ( n numbers means sfrom array)

#include<stdio.h>
#include<stdlib.h>

int EvenCount(int Arr[],int iSize)
{
	int iCnt = 0,iEvenCnt = 0;
	
	for(iCnt = 0;iCnt < iSize;iCnt++)
	{
		if((Arr[iCnt] % 2) == 0)
		{
			iEvenCnt++;
		}
	}
	return iEvenCnt;
}
int main()
{
	int *ptr = NULL;
	int iLength = 0 ,i = 0; 
	int iRet = 0;
	// Accept size of array
	printf("Enter the number of elements : ");
	scanf("%d",&iLength);
	
	// Allocate memory for array
	ptr = (int *)malloc(iLength * sizeof(int));
	
	printf("Please enter the numbers : \n");
	for(i = 0;i < iLength;i++)
	{
		scanf("%d",&ptr[i]);	
	}
	
	iRet = EvenCount(ptr, iLength);
	printf("Count of Even numbers in array is : %d",iRet);

	free(ptr);
	
	return 0;	 
}
