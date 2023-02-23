// Count the files from the folder

import java.util.*;
import java.io.*;  

class Program320
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

				//File allfiles[] = fobj.listFiles();

				//System.out.println("Number of files are : "+allfiles.length);
				String contents[] = fobj.list();
				int i = 0;
				while(i < contents.length)
				{
					System.out.println(contents[i]);
					i++;
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