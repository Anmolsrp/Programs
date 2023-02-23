// Accept n numbers from the users and perform there addition

#include<stdio.h>
#include<stdlib.h>

int Summation(int iArr[],int iSize)
{
	int iCnt = 0,iSum = 0;
	
	for(iCnt = 0; iCnt < iSize ; iCnt++)
	{
		iSum = iSum + iArr[iCnt];
	}
	return iSum;
}

int main()
{
	int *ptr = NULL;
	int iCnt = 0, iLength = 0, iRet = 0;
	
	printf("Enter number of elements you want to store : \n");
	scanf("%d",&iLength);
	
	ptr = (int *)malloc(iLength * sizeof(int));
		
	printf("Enter the elements : \n");
	
	for(iCnt = 0;iCnt < iLength;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	
	iRet = Summation(ptr,iLength);
	printf("Addition of all elements is : %d\n",iRet);
	
	free(ptr);
	
	return 0;
	
}

