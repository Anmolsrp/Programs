//File Size
import java.util.*;
import java.io.*;

class Program315
{
	public static void main(String args[]) throws Exception
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter the file name : ");
		String FileName = sobj.nextLine();

		File fobj = new File(FileName);

		if(fobj.exists())
		{
			System.out.println("File size is : "+fobj.length());
		}
		else
		{
			System.out.println("There is no such file");
		}
	}
}