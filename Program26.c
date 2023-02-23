// Find Factors of a number

#include<stdio.h>

// O(N) Order of N  (Big O of N)
void DisplayFactors(int iNo)
{
	int iCnt = 0;
	
		printf("Factors of %d is :\n",iNo);
		for(iCnt = 1;iCnt < iNo;iCnt++)
		{
			if((iNo % iCnt) == 0)
			{
				printf("%d\n",iCnt);
			}
		}
}

int main()
{
	int iValue = 0;
	
	printf("Enter the number : \n");
	scanf("%d",&iValue);
	
	DisplayFactors(iValue);
	
	
	return 0;
}
