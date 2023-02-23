// Display table 
// Input : 5
// Output : 5 10 15 20 25 30 35 40 45 50

#include<stdio.h>

void DisplayTable(int iNo)
{
	int iCnt = 0;
	int iFix = 0; 
	printf("Table of %d is :\n",iNo);
	printf("_______________________\n");
	iFix = 10;
	for(iCnt = 1;iCnt<=iFix ;iCnt++)
	{
		printf("| %d |\n",iNo * iCnt);
	}
	printf("________________________\n");
}
int main()
{
	int iValue = 0;

	printf("Enter the number : ");
	scanf("%d",&iValue);
	
	DisplayTable(iValue);
	
	return 0;
}
