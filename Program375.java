import java.util.*;

class Program375
{
	public static void main(String args[])
	{
		LinkedList <Integer>obj = new LinkedList();

		obj.add(11);
		obj.addLast(4546);
		obj.add(21);
		obj.add(51);

		obj.remove(0);

		System.out.println("Data is : "+obj);

		for(int no : obj)
		{
			System.out.println(no);
		}
	}
}