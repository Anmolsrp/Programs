import java.util.*;

class Numbers
{
	public void DisplayEvenFactors(int iValue)
	{
		for(int iCnt = 1;iCnt <= (iValue/2) ;iCnt++)
		{
			if((iValue % iCnt) == 0)
			{
				if((iCnt % 2) == 0)
				{
					System.out.println("Even factors is : "+iCnt);
				}
			}
		}
	}
}
class Program183
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