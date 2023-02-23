// Display Odd factors of a number
#include<stdio.h>

// O(N/4) order of N/4  (Big O Of N/4)

void DisplayOddFactors(int iNo)
{
	int iCnt = 0,iSum = 0;
	
		for(iCnt = 1; iCnt <= (iNo/2); iCnt += 2) // iteration is minimized by N/4 by iCnt += 2
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
	
	DisplayOddFactors(iValue);
	
	return 0;
} 

// gcc Program38.c -o Program38exe
