import java.util.*;

class Program369
{
	public static void main(String args[])
	{
		Scanner sobj = new Scanner(System.in);

		System.out.println("Enter the string : ");
		String str = sobj.nextLine();

		char Arr[] = str.toCharArray();

		System.out.println(str.length());
		System.out.println(Arr.length);

		int Count = 0;

		for(int i = 0;i < Arr.length;i++)
		{
			if((Arr[i] >= 'A') && (Arr[i] <= 'Z'))
			{
				Arr[i] = (char)(Arr[i] + 32);
			}
		}

		String str2 = Arr.toString();
		
		System.out.println("Final converted string is : "+str);
	}
}