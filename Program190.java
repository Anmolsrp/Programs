import java.util.*;

// Time complexity : N
class Digits
{
	private int CountDigits(int iNo)
	{
		int iCnt = 0;
		while(iNo != 0)
		{
			iCnt++;
			iNo = iNo/10;
		}
		return iCnt;
	}

	private int Power(int Base, int index)  // Base = 4 index = 5
	{
		int iAns = 1;

		for(int iCnt = 1;iCnt <= index;iCnt++)
		{
			iAns = iAns * Base;
		}
		return iAns;
	}
	
	public boolean CheckArmstrong(int iNo)
	{
		int iTemp = iNo;
		int iDigit = 0, iSum = 0,ipower = 0,iCount = 0;
		

		iCount = CountDigits(iTemp);
		
		while(iNo != 0)
		{
			iDigit = iNo % 10;
			ipower = Power(iDigit,iCount); 
			iSum = iSum + ipower;
			iNo = iNo / 10;
		}
		
		if(iSum == iTemp)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}
class Program190
{
	public static void main(String args[])
	{
		Scanner sobj = new Scanner(System.in);

		int iNo = 0;

		System.out.println("Enter the number : ");
		iNo = sobj.nextInt();

		Digits dobj = new Digits();
		
		boolean iRet = dobj.CheckArmstrong(iNo);  
		
		if(iRet == true)
		{
			System.out.println(iNo +" is a Armstrong");
		}
		else
		{
			System.out.println(iNo +" is not a Armstrong");	
		}
		
	}
}
