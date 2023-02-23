import java.util.*;

class MarvellousX
{
	public int SmallCount(String s)
	{
		int iCnt = 0;

		char Arr[] = s.toCharArray();

		for(int i = 0;i < Arr.length;i++)
		{
			if((Arr[i] >= 'a') && (Arr[i] <= 'z'))
			{
				iCnt++;
			}
		}
		return iCnt;
	}
}

class Program206
{
	public static void main(String args[])
	{
		Scanner sobj = new Scanner(System.in);

		System.out.println("Enter string : ");
		String str = sobj.nextLine();

		

		MarvellousX obj = new MarvellousX();

		int iRet = obj.SmallCount(str);
		System.out.println("Number of small count letter is : "+iRet);
	}
}

// toCharArray() string to character array