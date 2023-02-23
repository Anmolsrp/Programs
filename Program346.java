import java.util.*;

interface Marvellous
{
	public void BubbleSort();
	public void SelectionSort();
	public void InsertionSort();

	// Abstract method is a method which is without body
}

class Sorting implements Marvellous
{
	private int Arr[];

	public Sorting(int Size)
	{
		Arr = new int[Size];
	}

	public void Accept()   // concrete method
	{
		Scanner sobj = new Scanner(System.in);

		System.out.println("Enter the elements : ");
		for(int i = 0;i < Arr.length;i++)
		{
			Arr[i] = sobj.nextInt();
		}
	}

	public void Display()  // concrete method
	{
		System.out.println("Elements of array are : ");
		for(int i = 0;i < Arr.length;i++)
		{
			System.out.println(Arr[i]);
		}
	}

	public void BubbleSort()  // concrete method
	{
		int temp = 0;
		int i = 0 , j = 0;
		boolean flag = false;

		for(i = 0;i < Arr.length;i++)
		{
			flag = false;

			for(j = 0;j < Arr.length - i - 1;j++)   
			{
				if(Arr[j] < Arr[j+1])    // descending order bubble sort
				{
					temp = Arr[j];
					Arr[j] = Arr[j+1];
					Arr[j+1] = temp;
					flag = true;
				}
			}
			if(flag == false)
			{
				break;
			}
		}
	}

	public void SelectionSort()   // concrete method
	{
		int i = 0,j = 0, Min_Index = 0, temp = 0;

		for(i = 0; i < Arr.length-1; i++)
		{
			Min_Index = i;	
			for(j = i+1; j < Arr.length; j++)
			{
				if(Arr[j] < Arr[Min_Index])
				{
					Min_Index = j;
				}
			}

			temp = Arr[i];
			Arr[i] = Arr[Min_Index];
			Arr[Min_Index] = temp;
		}
	}

	public void InsertionSort()  // concrete method
	{

	}
}

class Program346
{
	public static void main(String args[])
	{
		Scanner sobj = new Scanner(System.in);

		System.out.println("Enter the size of Array : ");
		int Size = sobj.nextInt();

		Sorting obj = new Sorting(Size);
		obj.Accept();
		obj.Display();
	
		obj.SelectionSort();
		obj.Display();
	}
}