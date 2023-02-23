
import java.util.*;

/*
 	Input : 4529
 	
 	9 2 5 4

*/
class Pattern
{
	public void Display(int iNo)
	{
		int i = 0 , j = 0;
		int iDigit = 0;
		int iTemp1 = iNo;
		int iTemp2 = iNo;
		// iLength = iNo.length();

		while(iTemp1 != 0)
		{	
			while(iTemp2 != 0)
			{
				iDigit = iTemp2 % 10;
				System.out.print(iDigit +"\t");
				iTemp2 = iTemp2 / 10;
			}
			iTemp2 = iNo;
			System.out.println();
			iTemp1 = iTemp1 / 10;
		}
	}
}

class Program222
{
	public static void main(String args[])
	{
		Pattern pobj = new Pattern();

		Scanner sobj = new Scanner(System.in);

		System.out.println("Enter the Number : ");

		int iNo = sobj.nextInt();

		pobj.Display(iNo);
	}
}