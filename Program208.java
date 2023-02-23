import java.util.*;

class Program208
{
	public static void main(String args[])
	{
		Scanner sobj = new Scanner(System.in);

		System.out.println("Enter string : ");
		String str = sobj.nextLine();

		char Arr[] = str.toCharArray();
		
		for(int iCnt = 0;iCnt < Arr.length;iCnt++)
		{
			System.out.println(Arr[iCnt]);
		}
	}
}

// toCharArray() string to character array