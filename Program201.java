import java.util.*;

class Program201
{
	public static void main(String args[])
	{
		Scanner sobj = new Scanner(System.in);

		System.out.println("Enter your name : ");
		String str = sobj.nextLine();

		for(int i = 0;i<str.length();i++)
		{
			System.out.println(str.charAt(i));
		}
	}
}