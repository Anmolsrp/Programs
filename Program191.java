import java.util.*;

// Time complexity : N
class Digits
{	
	public boolean CheckArmstrong(int iNo)
	{
		int iTemp = iNo;
		int iDigit = 0,iCnt = 0,iDigitCnt = 0, iSum = 0,ipower = 1,iCount = 0;
		
		while(iTemp != 0)
		{
			iDigitCnt++;
			iTemp = iTemp/10;
		}

		iTemp = iNo;

		while(iTemp != 0)
		{
			iDigit = iTemp % 10;
			for(iCnt = 1;iCnt <= iDigitCnt;iCnt++)
			{
				ipower = ipower *iDigit;
			} 
			iSum = iSum + ipower;
			ipower = 1;
			iTemp = iTemp / 10;
		}
		
		if(iSum == iNo)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}
class Program191
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
