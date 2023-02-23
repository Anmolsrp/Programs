/*
	Row= 4 Column = 4

	1 2 3 4
	1 2 3 4
	1 2 3 4
	1 2 3 4
*/

#include<stdio.h>

void Display(int iRow,int iColumn)
{
	int iRowCnt = 0, iColCnt = 0;
	
	for(iRowCnt = 1;iRowCnt <= iRow;iRowCnt++)
	{
	
		for(iColCnt = 1;iColCnt <= iColumn;iColCnt++)
		{
			printf("%d   ",iColCnt);
		}
		printf("\n");
	}
}

int main()
{
	int iValue1 = 0,iValue2 = 0;
	
	printf("Enter the number of rows : ");
	scanf("%d",&iValue1);
	
	printf("Enter the number of columns : ");
	scanf("%d",&iValue2);
	
	Display(iValue1,iValue2);
	
	return 0;
}
