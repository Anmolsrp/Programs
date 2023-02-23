
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

		// iLength = iNo.length();

		while(iNo != 0)
		{
			iDigit = iNo % 10;
			System.out.print(iDigit +"\t");
			iNo = iNo / 10;
		}
		// for(i = 0; i < iNo; i++)
		// {
		// 	for(j = 0; j < iNo; j++)
		// 	{
		// 		System.out.print(str.charAt(j)+"\t");
		// 	}
		// 	System.out.println();
		// }
	}
}

class Program221
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