// 4
/*  square pattern
   *  *  *  *
   *  *  *  *
   *  *  *  *
   *  *  *  *  
*/

// Time Complexity : N^2
#include<stdio.h>

void DisplayPattern(int iRow,int iColumn)
{
	int iRowCnt = 0,iColumnCnt = 0;
	
	if(iRow < 0)  //Updater
	{
		iRow = -iRow;
	}
	if(iColumn < 0)  //Updater
	{
		iColumn = -iColumn;
	}
	
	for(iRowCnt = 1;iRowCnt <= iRow;iRowCnt++) 
	{
		for(iColumnCnt = 1;iColumnCnt <= iColumn;iColumnCnt++)
		{
			printf("*\t");
		}
		printf("\n");
	}
}
int main()
{
	int iValue1 = 0,iValue2 = 0;
	
	printf("Enter the number of Rows : ");
	scanf("%d",&iValue1);
	
	printf("Enter the number of Column : ");
	scanf("%d",&iValue2);
	
	DisplayPattern(iValue1,iValue2);
	
	return 0;
}
