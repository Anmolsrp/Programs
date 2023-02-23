
import java.util.*;

/*
 	Row = 4
 	Col = 4

 	1 2 3 4
 	5 6 7 8
	9 1 2 3
	4 5 6 7 

*/
class Pattern
{
	public void Display(int iRow,int iCol)
	{
		int i = 0 , j = 0;
		int iCnt = 0;

		for(i = 1; i <= iRow; i++)
		{
			for(j = 1; j <= iCol; j++)
			{
				// if(iCnt == 10)
				// {
				// 	iCnt = 1;
				// }
				System.out.print((iCnt%9)+1 +"\t");  // using %10 the value after 9 becomes 0 so use %9 for 1 after 9
				iCnt++;
			}
			System.out.println();
		}
	}
}

class Program218
{
	public static void main(String args[])
	{
		Pattern pobj = new Pattern();

		Scanner sobj = new Scanner(System.in);

		System.out.println("Enter the number of rows : ");

		int iRow = sobj.nextInt();

		System.out.println("Enter the number of columns : ");

		int iCol = sobj.nextInt();

		pobj.Display(iRow,iCol);
	}
}