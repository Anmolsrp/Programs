
import java.util.*;

/*
 	Row = 4
 	Col = 4

 	H e l l o
 	H e l l o
 	H e l l o
 	H e l l o

*/
class Pattern
{
	public void Display(String str)
	{
		int i = 0 , j = 0;

		int iNo = str.length();

		for(i = 0; i < iNo; i++)
		{
			for(j = 0; j < iNo; j++)
			{
				System.out.print(str.charAt(j)+"\t");
			}
			System.out.println();
		}
	}
}

class Program220
{
	public static void main(String args[])
	{
		Pattern pobj = new Pattern();

		Scanner sobj = new Scanner(System.in);

		System.out.println("Enter the string : ");

		String s = sobj.nextLine();

		pobj.Display(s);
	}
}