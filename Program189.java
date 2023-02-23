import java.util.*;

// Time complexity : N
class Digits
{
	public int CheckArmstrong(int iNo)
	{
		int iCnt = 0;
		int iSum = 0;
		int iDigit = 0;

		while(iNo != 0)
		{
			iDigit = iNo%10;
			iSum = iSum + iDigit*iDigit*iDigit;
			iNo = iNo/10; 
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
			System.out.println(iNo+"is a Armstrong");
		}
		else
		{
			System.out.println(iNo+"is not aArmstrong");	
		}
		
	}
}
