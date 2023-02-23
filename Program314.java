import java.util.*;
import java.io.*;

class Program314
{
	public static void main(String args[]) throws Exception
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter the file name : ");
		String FileName = sobj.nextLine();

		File fobj = new File(FileName);

		boolean bobj = fobj.createNewFile();
		
		if(bobj == true)
		{
			System.out.println("File is successfully created");
		}
		else
		{
			System.out.println("Unable to create the file");
		}
	}
}