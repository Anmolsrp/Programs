import java.util.*;

class MarvellousX
{
	public int SmallCount(String s)
	{
		int iCnt = 0;

		for(int i = 0;i<s.length();i++)
		{
			if((s.charAt(i) >= 'A') && (s.charAt(i) <= 'Z'))
			{
				iCnt++;
			}
		}
		return iCnt;
	}
}
class Program203

{
	public static void main(String args[])
	{
		Scanner sobj = new Scanner(System.in);

		System.out.println("Enter string : ");
		String str = sobj.nextLine();

		MarvellousX obj = new MarvellousX();
		int iRet = obj.SmallCount(str);
		System.out.println("Number of small case letters are : "+iRet);
	}
}