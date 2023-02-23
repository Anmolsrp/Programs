
import java.util.*;

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

	public int Addition()
	{
		int iSum = 0;
		for(int iCnt = 0;iCnt < Arr.length; iCnt++)
		{
			iSum = iSum + Arr[iCnt];
		}
		return iSum;
	}
}

class Program194
{
	public static void main(String args[])
	{
		Scanner sobj = new Scanner(System.in);

		System.out.println("Enter the size of array : \n");

		int iSize = sobj.nextInt();

		MarvellousX obj = new MarvellousX(iSize);
		obj.Accept();
		obj.Display();
		int iRet = obj.Addition();
		System.out.println("Addition of all elements is : "+iRet);
	}
}