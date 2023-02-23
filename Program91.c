/*
	Row = 4 Column = 4
	
	@ 2 3 4
	1 @ 3 4
	1 2 @ 4
	1 2 3 @

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
			if(iRowCnt == iColCnt)
			{
				printf("@\t");	
			}
			else
			{
				printf("%d\t",iColCnt);	
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
