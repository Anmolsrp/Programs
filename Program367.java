// loop editing

import java.util.*;

class Program367
{
	public static void main(String args[])
	{
		Scanner sobj = new Scanner(System.in);

		System.out.println("Enter the string : ");
		String str = sobj.nextLine();

		char Arr[] = str.toCharArray();

		System.out.println(str.length());
		System.out.println(Arr.length);

		int Count = 0;
		for(char Ch : Arr)
		{
			if((Ch >= 'a') && (Ch <= 'z'))
			{
				Count++;
			}
		}

		System.out.println("Small characters are : "+Count);
	}
}