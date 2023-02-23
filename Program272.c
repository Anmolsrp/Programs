// 

#include<stdio.h>

void FactorsR(int No)    // recursive approach
{
	static int iCnt = 1;   // storage class static
	
	if(iCnt <= (No/2))
	{
		if((No % iCnt) == 0)
		{
			printf("%d\n",iCnt);
		}
		iCnt++;
		FactorsR(No);
	}
}

int main()
{
	printf("Inside main\n");
	int Value = 0;
	printf("Enter the number : \n");
	scanf("%d",&Value);
	FactorsR(Value);
	printf("\n\nEnd of main\n");
	return 0;
}
