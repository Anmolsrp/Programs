/*
	Row = 4 Column = 4
	
	* 2 * 4
	* 2 * 4
	* 2 * 4
	* 2 * 4 
*/

#include<stdio.h>

void Display(int iRow,int iColumn)
{
	int iRowCnt = 0, iColCnt = 0;
	
	for(iRowCnt = 1;iRowCnt <= iRow;iRowCnt++)
	{
	
		for(iColCnt = 1;iColCnt <= iColumn;iColCnt++)
		{
			if((iColCnt % 2) == 0)
			{
				printf("%d\t",iColCnt);
			}
			else
			{
				printf("*\t",iRowCnt);	
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
