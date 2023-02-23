// Input - 4
// 4 + 3 + 2 + 1 = 10

#include<stdio.h>

void FactorsI(int No)    // iterative approach
{
	auto int iCnt = 1;   // storage class auto
	
	while(iCnt <= (No/2))
	{
		if((No % iCnt) == 0)
		{
			printf("%d\n",iCnt);
		}
		iCnt++;
	}
}

int main()
{
	printf("Inside main\n");
	int Value = 0;
	printf("Enter the number : \n");
	scanf("%d",&Value);
	FactorsI(Value);
	printf("\n\nEnd of main\n");
	return 0;
}
