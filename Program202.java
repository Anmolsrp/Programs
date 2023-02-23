import java.util.*;

class MarvellousX
{
	public void Display(String s)
	{
		for(int i = 0;i<s.length();i++)
		{
			System.out.println(s.charAt(i));
		}
	}
}
class Program202
{
	public static void main(String args[])
	{
		Scanner sobj = new Scanner(System.in);

		System.out.println("Enter string : ");
		String str = sobj.nextLine();

		MarvellousX obj = new MarvellousX();
		obj.Display(str);
	}
}