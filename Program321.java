// read  the files names from the folder

import java.util.*;
import java.io.*;  

class Program321
{
	public static void main(String args[]) throws Exception
	{
		Scanner sobj = new Scanner(System.in);
		
		try
		{
			System.out.println("Enter the folder name : ");
			String FolderName = sobj.nextLine();

			File fobj = new File(FolderName);

			if(fobj.exists())
			{

				File allfiles[] = fobj.listFiles();

				System.out.println("Number of files are : "+allfiles.length);

				for(int i = 0; i < allfiles.length; i++)
				{
					System.out.println(allfiles[i].getName());
				}
			}
			else
			{
				System.out.println("There is no such foler");
			}

		}// End of try
		catch(Exception obj)
		{
			System.out.println("Exception occured : "+obj);
		}
	}// end of main	
}// end of class