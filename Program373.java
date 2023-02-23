import java.util.*;

class Program373
{
	public static void main(String args[])
	{
		Scanner sobj = new Scanner(System.in);

		System.out.println("Enter the string : ");
		String str = sobj.nextLine();

		String data = str.replaceAll("\\s+"," ");   //   \\s is the regular expression
		// EXTRA WHILTE SPACES CAN BE REMOVED USING replaceAll() and regex
		String newstr = data.trim(); 
		
		String Arr[] = newstr.split(" ");
	
		System.out.println("Number of words are : "+Arr.length);
	}
}