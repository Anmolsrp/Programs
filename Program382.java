import java.util.*;

class Program382
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

	 		Set <String> setobj = hobj.keySet();

	 		int iMax = 0;
	 		String cMax = " ";
	 		for(String value : setobj)
	 		{
	 			if(iMax < hobj.get(value))
	 			{
	 				iMax = hobj.get(value);
	 				cMax = value;
	 			}
	 		}
	 		System.out.println("Maximum times occured Word is : "+cMax+" with Frequency "+iMax);
	 	}
	}
}