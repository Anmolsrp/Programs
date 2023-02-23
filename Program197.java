
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

	public void Reverse()
	{
		int iStart = 0;
		int iEnd = Arr.length - 1;
		int iTemp = 0;

		while(iStart < iEnd)   // N/2
		{
			iTemp = Arr[iStart];
			Arr[iStart] = Arr[iEnd];
			Arr[iEnd] = iTemp;

			iStart++;
			iEnd--;

		}
	}
}

class Program197
{
	public static void main(String args[])
	{
		Scanner sobj = new Scanner(System.in);

		System.out.println("Enter the size of array : \n");

		int iSize = sobj.nextInt();

		MarvellousX obj = new MarvellousX(iSize);
		obj.Accept();
		obj.Display();
		
		obj.Reverse();
		System.out.println("Array after reverse operation : ");

		obj.Display();
	}
}