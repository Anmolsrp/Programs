
import java.util.*;

class ArrayX
{
	public int Arr[];

	public ArrayX(int iSize)
	{
		Arr = new int [iSize];
	}

	public void Accept() // getter
	{
		Scanner sobj = new Scanner(System.in);

		System.out.println("Enter the"+Arr.length+" elements in the array : ");

		for(int iCnt = 0;iCnt < Arr.length; iCnt++)
		{
			System.out.println("Enter the element no : "+(iCnt+1));
			Arr[iCnt] = sobj.nextInt();	
		}
	}

	public void Display() // setter
	{
		System.out.println("Elements of the array are : \n");
		for(int iCnt = 0;iCnt < Arr.length; iCnt++)
		{
			System.out.println(Arr[iCnt]+"\t");
		}
	}
}

class Program192
{
	public static void main(String args[])
	{
		Scanner sobj = new Scanner(System.in);

		System.out.println("Enter the size of array : \n");

		int iSize = sobj.nextInt();

		ArrayX obj = new ArrayX(iSize);
		obj.Accept();
		obj.Display();
	}
}