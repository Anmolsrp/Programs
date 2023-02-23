import java.util.*;

class Program383
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

	 		String output = "";

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
	 				//System.out.println(s);
	 				s = s + " ";
	 				output = output + " "+ s;
	 			}
	 		}
	 		System.out.println(output);
	 		//System.out.println("Maximum times occured Word is : "+cMax+" with Frequency "+iMax);
	 	}
	}
}