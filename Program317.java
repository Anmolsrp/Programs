// Read the data from the file
import java.util.*;
import java.io.*;
import java.nio.charset.StandardCharsets;  

class Program317
{
	public static void main(String args[]) throws Exception
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter the file name : ");
		String FileName = sobj.nextLine();

		File fobj = new File(FileName);

		String str;
		if(fobj.exists())
		{
			FileInputStream fiobj = new FileInputStream(fobj);

			byte Buffer[] = new byte[100];
			int ret = 0;

			while((ret = fiobj.read(Buffer)) != -1)
			{
				str = new String(Buffer,StandardCharsets.UTF_8);
				System.out.println(str);  

				// if we use direct Buffer int s.o.p
				// the output is in hashcode because of byte array
			}
		}
		else
		{
			System.out.println("There is no such file");
		}
	}
}