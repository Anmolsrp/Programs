import java.util.*;

class Program372
{
	public static void main(String args[])
	{
		Scanner sobj = new Scanner(System.in);

		System.out.println("Enter the string : ");
		String str = sobj.nextLine();

		String newstr = str.trim(); // multiple whilte spaces before and after the string use this trim()
		String Arr[] = newstr.split(" ");
	
		System.out.println("Number of words are : "+Arr.length);
	}
}