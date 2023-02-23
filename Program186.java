import java.util.*;

// Time complexity : N/2
class Numbers
{
	public void DisplayCommonFactors(int iValue1,int iValue2)
	{
		System.out.print("Common factors are : ");
		for(int iCnt = 1;(iCnt <= iValue1/2) && (iCnt <= iValue2/2) ;iCnt++)
		{
			if(((iValue1 % iCnt) == 0) && ((iValue2 % iCnt) == 0))
			{
				System.out.print(iCnt );
			}
		}
	}
}
class Program186
{
	public static void main(String args[])
	{
		Scanner sobj = new Scanner(System.in);

		int iNo1 = 0, iNo2 = 0;

		System.out.println("Enter first the number : ");
		iNo1 = sobj.nextInt();

		System.out.println("Enter second the number : ");
		iNo2 = sobj.nextInt();

		Numbers nobj = new Numbers();
		
		nobj.DisplayCommonFactors(iNo1,iNo2);  
	}
}

// for(int iCnt = 1;iCnt <= ((iValue1+iValue2)/2) ;iCnt++)
// This is also applicable