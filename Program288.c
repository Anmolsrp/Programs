//Accept the string from user print the pattern

#include<stdio.h>

void DisplayR(int Arr[],int iSize)    // recursive approach
{
	
	static int iCnt = 0;
	
	if(iCnt < iSize)
	{
		printf("%d\n",Arr[iCnt]);
		iCnt++;
		DisplayR(Arr,iSize);
	}
}

int main()
{
	int Brr[5] = {10,20,30,40,50};
	
	DisplayR(Brr,5);

	return 0;
}
