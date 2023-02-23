// * * * *
// iterative approach

#include<stdio.h>

void DisplayI()
{
	int iCnt = 1;
	
	while(iCnt <= 4)
	{
		printf("*\t");
		iCnt++;
	}
}
int main()
{
	DisplayI();
	return 0;
}
