import java.util.*;

// Time complexity : N/2
class Numbers
{
	public int FactorsMultiplication(int iValue)
	{
		int iCnt = 0;
		int iMult = 1;

		for(iCnt = 1;iCnt <= (iValue/2) ;iCnt++)
		{
			if((iValue % iCnt) == 0)
			{
				iMult = iMult * iCnt;
			}
		}
		return iMult;
	}
}
class Program188
{
	public static void main(String args[])
	{
		Scanner sobj = new Scanner(System.in);

		int iNo = 0;

		System.out.println("Enter the number : ");
		iNo = sobj.nextInt();

		Numbers nobj = new Numbers();
		
		int iRet = nobj.FactorsMultiplication(iNo);  
		
		System.out.println("Multiplication of factors of "+ iNo +" is : "+iRet);
	}
}
