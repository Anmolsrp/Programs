// Accept array and return addition

#include<stdio.h>

int DisplayR(int Arr[],int iSize)    // recursive approach
{
	static int iCnt = 0;
	static int iSum = 0;
	if(iCnt < iSize)
	{
		iSum = iSum + Arr[iCnt];
		iCnt++;
		DisplayR(Arr,iSize);
	}
	return iSum;
}

int main()
{
	int Brr[5] = {10,20,30,40,50};
	int iRet = 0;
	
	iRet = DisplayR(Brr,5);
	printf("Addition is : %d",iRet);
	
	return 0;
}
