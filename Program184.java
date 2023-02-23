import java.util.*;

// Time complexity : N/4
class Numbers
{
	public void DisplayEvenFactors(int iValue)
	{
		for(int iCnt = 2;iCnt <= (iValue/2) ;iCnt+=2)
		{
			if((iValue % iCnt) == 0)
			{
				System.out.println("Even factors is : "+iCnt);
			}
		}
	}
}
class Program184
{
	public static void main(String args[])
	{
		Scanner sobj = new Scanner(System.in);

		int iNo = 0;

		System.out.println("Enter the number : ");
		iNo = sobj.nextInt();

		Numbers nobj = new Numbers();
		
		nobj.DisplayEvenFactors(iNo);  
	}
}