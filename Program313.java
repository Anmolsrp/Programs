import java.util.*;
import java.io.*;

class Program313
{
	public static void main(String args[]) throws Exception
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter the file name : ");
		String FileName = sobj.nextLine();

		File fobj = new File(FileName);

		fobj.createNewFile();

		System.out.println("File name is : "+FileName);
	}
}