import java.util.*;

class Program380
{
	public static void main(String args[])
	{
	 	Scanner sobj = new Scanner(System.in);
	 	{
	 		System.out.println("Enter String : ");
	 		String str = sobj.nextLine();

	 		char Arr[] = str.toCharArray();

	 		HashMap <Character, Integer> hobj = new HashMap();
	 		int Frequency = 0;

	 		for(char ch : Arr)
	 		{
	 			if(hobj.containsKey(ch))
	 			{
	 				Frequency = hobj.get(ch);
	 				hobj.put(ch,Frequency+1);
	 			}
	 			else
	 			{
	 				hobj.put(ch,1);
	 			}
	 		}
	 		//System.out.println(hobj);
	 	
	 		Set < Character> setobj = hobj.keySet();

	 		int iMax = 0;
	 		char cMax = ' ';
	 		for(char value : setobj)
	 		{
	 			if(iMax < hobj.get(value))
	 			{
	 				iMax = hobj.get(value);
	 				cMax = value;
	 			}
	 		}

	 		System.out.println("Maximum times occured Character is : "+cMax+" with Frequency "+iMax);
	 	}
	}
}