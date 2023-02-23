//Accept n number from user and print Arr in reverse order

#include<stdio.h>
#include<stdlib.h>

void DisplayReverse(int Arr[],int iSize)
{
	int iCnt = 0;
	
	printf(" Elements in reverse order : \n");
	for(iCnt = iSize - 1;iCnt >= 0 ;iCnt--)
	{
		printf("%d\n ",Arr[iCnt]);
	}
	
}
int main()
{
	int *ptr = NULL;
	int iLength = 0,i = 0;
	
	printf("Enter the number of elements : ");
	scanf("%d",&iLength);
	
	ptr = (int *)malloc(iLength * sizeof(int));
	
	printf("Please enter the number : \n");
	for(i = 0;i < iLength; i++)
	{
		scanf("%d",&ptr[i]);
	}
	
	DisplayReverse(ptr, iLength);

	free(ptr);
	return 0;
}
