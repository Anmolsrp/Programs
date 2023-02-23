// loop editing

import java.util.*;

class Program368
{
	public static void main(String args[])
	{
		Scanner sobj = new Scanner(System.in);

		System.out.println("Enter the string : ");
		String str = sobj.nextLine();

		char Arr[] = str.toCharArray();

		System.out.println(str.length());
		System.out.println(Arr.length);

		int Count = 0 , i = 0;
		while(i < Arr.length)
		{
			if((Arr[i] >= 'a') && (Arr[i] <= 'z'))
			{
				Count++;
			}
			i++;
		}

		System.out.println("Small characters are : "+Count);
	}
}