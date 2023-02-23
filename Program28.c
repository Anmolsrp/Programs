// Find the Factors of a number and add the factors  using time complexity

#include<stdio.h>

// O(N/2) order of N/2  (Big Of N/2)
int SumFactors(int iNo)
{
	int iCnt = 0;
	int iSum = 0;
		printf("Factors of %d is :\n",iNo);
		for(iCnt = 1;iCnt <= (iNo/2);iCnt++)
		{
			if((iNo % iCnt) == 0)
			{
				printf("%d\n",iCnt);
				iSum = iSum + iCnt;
			}
		}
		return iSum;
}

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter the number : \n");
	scanf("%d",&iValue);
	
	iRet = SumFactors(iValue);
	printf("Addition of factors is : %d",iRet);
	
	return 0;
}
