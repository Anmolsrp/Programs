// * * * *
// recursion

#include<stdio.h>

void DisplayI()    // iterative approach
{
	int iCnt = 1;   // storage class auto
	
	while(iCnt <= 4)
	{
		printf("*\t");
		iCnt++;
	}
}

void DisplayR()    // recursive approach
{
	int iCnt = 1;   // storage class static
	
	if(iCnt <= 4)
	{
		printf("*\t");
		iCnt++;
		DisplayR(); // Recursive Call
	}
}
int main()
{
	//DisplayI();
	DisplayR();
	return 0;
}
