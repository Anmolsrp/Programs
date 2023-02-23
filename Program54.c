// Accept n numbers from the users and perform there addition

#include<stdio.h>

int main()
{
	int iArr[5];
	int iCnt = 0;
	
	printf("Enter the elements : \n");
	
	for(iCnt = 0;iCnt < 5;iCnt++)
	{
		scanf("%d",&iArr[iCnt]);
	}
	
	printf("Elements from array are : \n");
	
	for(iCnt = 0;iCnt <= 5;iCnt++)
	{
		printf("%d\n",iArr[iCnt]);
	}
	
	return 0;
}
