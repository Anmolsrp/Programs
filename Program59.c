
#include<stdio.h>
#include<stdlib.h>

void EvenOddCount(int Arr[],int iSize)
{
	int iCnt = 0, iEvenCnt = 0, iOddCnt = 0;
	
	for(iCnt = 0;iCnt < iSize;5
	555555
	
	iCnt++)
	{
		if((Arr[iCnt] % 2) == 0)
		{
			iEvenCnt++;
		}
		else
		{
			iOddCnt++;
		}
	}
	
	printf("Number of even elements are : %d\n",iEvenCnt);
	printf("Number of odd elements are : %d\n",iOddCnt);
	printf("Number of odd elements are : %d\n",iSize - iEvenCnt);

}
int main()
{
	int *ptr = NULL;
	int iLength = 0 , i = 0;
	
	printf("Enter the number of elements : ");
	scanf("%d",&iLength);
	
	ptr = (int *)malloc(iLength * sizeof(int));
	
	printf("Please enter the numbers : \n");
	for(i = 0;i < iLength;i++)
	{
		scanf("%d",&ptr[i]);
	}
	
	EvenOddCount(ptr, iLength);
	
	free(ptr);
	return 0;
}
