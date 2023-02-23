import java.util.*;

class Program381
{
	public static void main(String args[])
	{
	 	Scanner sobj = new Scanner(System.in);
	 	{
	 		System.out.println("Enter String : ");
	 		String str = sobj.nextLine();

	 		String Tokens[] = str.split(" ");

	 		HashMap <String, Integer> hobj = new HashMap();
	 		int Frequency = 0;

	 		for(String s : Tokens)
	 		{
	 			if(hobj.containsKey(s))
	 			{
	 				Frequency = hobj.get(s);
	 				hobj.put(s,Frequency+1);
	 			}
	 			else
	 			{
	 				hobj.put(s,1);
	 			}
	 		}
	 		//System.out.println(hobj);

	 		System.out.println("Maximum time word occured  is : "+hobj);
	 	}
	}
}