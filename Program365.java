import java.util.*;

class Program365
{
	public static void main(String args[])
	{
		Scanner sobj = new Scanner(System.in);

		System.out.println("Enter the string : ");
		String str = sobj.nextLine();

		char Arr[] = str.toCharArray();

		System.out.println(str.length());
		System.out.println(Arr.length);

	}
}