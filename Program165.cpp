#include<iostream>
using namespace std;

class DigitX
{
	public:
		int iNo;
		
		DigitX()
		{
			iNo = 0;
		}
		DigitX(int i)
		{
			iNo = i;
		}
		
		int SumEvenDigit()
		{
			int iDigit = 0;
			int iSum = 0;
			while(iNo != 0)
			{
				iDigit = iNo%10;
				if((iDigit % 2) == 0)
				{
					iSum = iSum + iDigit;
				}
				iNo = iNo / 10;	 
			}
			return iSum;
		}
};

int main()
{	
	int iValue = 0;
	int iRet = 0;
	
	cout<<"Enter number : "<<"\n";
	cin>>iValue;
	
	DigitX obj(iValue); // static
	
	iRet = obj.SumEvenDigit();
	cout<<"Sum of Even Digits is : "<<iRet<<"\n";
	
	cout<<obj.iNo;  // logical problem remians zero
	return 0;
}
