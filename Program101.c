/*
	Row = 4 Column = 4
	
	* * * *
	  *	* *
		* *
		  *
*/

#include<stdio.h>

void Display(int iRow,int iColumn)
{
	int iRowCnt = 0, iColCnt = 0;
	
	if(iRow != iColumn)   //filter
	{
		printf("Row numbers and column numbers are different ");
		return;
	}
	for(iRowCnt = 1;iRowCnt <= iRow;iRowCnt++)
	{
	
		for(iColCnt = 1;iColCnt <= iColumn;iColCnt++)
		{		
				if(iColCnt <= iRowCnt)
				{
					printf("*\t");
				}
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
