// * * * *
// recursion

#include<stdio.h>

void DisplayR(int No)    // recursive approach
{
	static int iCnt = 1;   // storage class static
	
	if(iCnt <= No)
	{
		printf("*\t");
		iCnt++;
		DisplayR(No); // Recursive Call
	}
}
int main()
{
	printf("Inside main\n");
	
	int Value = 0;
	printf("Enter the number : \n");
	scanf("%d",&Value);
	DisplayR(Value);
	
	printf("\n\nEnd of main\n");
	return 0;
}
