// * * * *
// recursion

#include<stdio.h>

void DisplayR()    // recursive approach
{
	static int iCnt = 1;   // storage class static
	
	if(iCnt <= 4)
	{
		printf("*\t");
		iCnt++;
		DisplayR(); // Recursive Call
	}
}
int main()
{
	
	printf("Inside Main\n");
	
	DisplayR();
	
	printf("\n\nEnd of main\n");
	return 0;
}
