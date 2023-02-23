
import java.util.*;

class Program196
{
	public static void main(String args[])
	{
		Scanner sobj = new Scanner(System.in);

		int iCnt = 0;
		int iSum = 0;

		System.out.println("Enter size of array : ");
		int iSize = sobj.nextInt();

		int Arr[] = new int [iSize];

		System.out.println("Enter elements in the array : ");

		for(iCnt = 0;iCnt<Arr.length;iCnt++)
		{
			Arr[iCnt] = sobj.nextInt();
		}

		for(iCnt = 0;iCnt<Arr.length;iCnt++)
		{
			iSum = iSum + Arr[iCnt];
		}

		System.out.println("Addition is : "+iSum);	
	}
}