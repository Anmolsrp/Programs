import java.util.*;

class Arithmetic
{
	public int iValue1;    // Characteristics
	public int iValue2;	   // Characteristics

	Arithmetic(int i,int j)      // Parametrised Constructor
	{
		this.iValue1 = i;
		this.iValue2 = j;
	}

	public int Addition()   // Behaviour
	{
		int Sum = 0;
		Sum = iValue1 + iValue2;
		return Sum;
	}
}

class Program182
{
	public static void main(String args[])
	{
		Scanner sobj = new Scanner(System.in);

		int iNo1 = 0 , iNo2 = 0, iAns = 0;

		System.out.println("Enter the First Number : ");
		iNo1 = sobj.nextInt();

		System.out.println("Enter the Second Number : ");
		iNo2 = sobj.nextInt();

		Arithmetic aobj = new Arithmetic(iNo1,iNo2);

		iAns = aobj.Addition();

		System.out.println("Addition is : "+iAns);
	}
}