// Read the data from the file
import java.util.*;
import java.io.*;  

class Program318
{
	public static void main(String args[]) throws Exception
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter the file name : ");
		String FileName = sobj.nextLine();

		File fobj = new File(FileName);

		int size = 0;
		if(fobj.exists())
		{
			FileInputStream fiobj = new FileInputStream(fobj);

			byte Buffer[] = new byte[100];
			int ret = 0;

			while((ret = fiobj.read(Buffer)) != -1)
			{
				size = size + ret;
			}
			System.out.println("Total size of file is : "+size);
		}
		else
		{
			System.out.println("There is no such file");
		}
	}
}