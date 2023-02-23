//Accept the string from user print the pattern

#include<stdio.h>

void DisplayR(int Arr[],int iSize)    // recursive approach
{
	
	int iCnt = 0;
	
	for(iCnt = 0;iCnt < iSize; iCnt++)
	{
		printf("%d\n",Arr[iCnt]);
	}
}

int main()
{
	int Brr[5] = {10,20,30,40,50};
	
	DisplayR(Brr,5);

	return 0;
}
