
import java.util.*;

// Time Complexity : N/2

class ArrayX
{
	protected int Arr[];

	public ArrayX(int iSize)
	{
		Arr = new int [iSize];
	}

	protected void Accept() // getter
	{
		Scanner sobj = new Scanner(System.in);

		System.out.println("Enter the"+Arr.length+" elements in the array : ");

		for(int iCnt = 0;iCnt < Arr.length; iCnt++)
		{
			System.out.println("Enter the element no : "+(iCnt+1));
			Arr[iCnt] = sobj.nextInt();	
		}
	}

	protected void Display() // setter
	{
		System.out.println("Elements of the array are : \n");
		for(int iCnt = 0;iCnt < Arr.length; iCnt++)
		{
			System.out.println(Arr[iCnt]+"\t");
		}
	}
}

class MarvellousX extends ArrayX
{
	public MarvellousX(int iSize)
	{
		super(iSize);
	}

	public boolean Palindrome()
	{
		int iStart = 0;
		int iEnd = Arr.length - 1;
		boolean bFlag = true;


		while(iStart < iEnd)   // N/2
		{
			if(Arr[iStart] != Arr[iEnd])
			{
				bFlag = false;
				break;
			}	
			iStart++;
			iEnd--;
		}
		return bFlag;
		
	}
}

class Program198
{
	public static void main(String args[])
	{
		Scanner sobj = new Scanner(System.in);

		System.out.println("Enter the size of array : \n");

		int iSize = sobj.nextInt();

		MarvellousX obj = new MarvellousX(iSize);
		obj.Accept();
		obj.Display();
		
		boolean bRet = obj.Palindrome();
		if(bRet == true)
		{
			System.out.println("Array is palindrome");
		}
		else
		{
			System.out.println("Array is not palindrome");
		}
	}
}