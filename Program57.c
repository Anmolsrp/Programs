// Create array and the summation of the elements and return the average

#include<stdio.h>
#include<stdlib.h>
// float Average(int *Arr, int iSize)  // pointer representation of array
float Average(int Arr[],int iSize)
{
	int iSum = 0, iCnt = 0;
	
	for(iCnt = 0;iCnt < iSize; iCnt++)
	{
		iSum = iSum + Arr[iCnt];
	}
	return (iSum / iSize);
}
int main()
{
	int *ptr = NULL;    
	int iLength = 0 ,i = 0;
	float fRet = 0.0f;
	
	printf("Enter the number of elements : ");
	scanf("%d",&iLength);
	
	ptr = (int *)malloc(iLength * sizeof(int));  //resource 
	// ptr(int *)malloc(5 * 4) 
	printf("Please enter the numbers : \n");
	for(i = 0;i < iLength;i++)
	{
		scanf("%d",&ptr[i]);
	}
	
	//fRet = Average(500, 5)  call by address (500) call by value(5)
	fRet = Average(ptr, iLength);
	printf("Average is : %f\n",fRet);
	
	free(ptr);  // free the resource  means deallocation the memory
	
	return 0;
}
