#include<iostream>
using namespace std;

//Input : 78942377
//Output : Maximum time occured digit is 7 and frequency is 3

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
		
		void DisplayFrequency()
		{
			int iDigit = 0;
			int iTemp = iNo;
			int Frequency[10] = {0};
			
			while(iTemp != 0)
			{
				iDigit = iTemp%10;
				Frequency[iDigit]++; 	
				iTemp = iTemp / 10;	
			}
			
			int iMaxFrequency = 0;
			int iMaxDigit = 0;
			for(int iCnt = 0; iCnt < 10; iCnt++)
			{
				if(Frequency[iCnt] > iMaxFrequency)
				{
					iMaxFrequency = Frequency[iCnt];
					iMaxDigit = iCnt;
				}
			}
			cout<<"Maximum time occired digit is "<<iMaxDigit<<" and its frequency is "<<iMaxFrequency<<"\n";
		}
};

int main()
{	
	int iValue = 0;
	int iRet = 0;
	
	cout<<"Enter number : "<<"\n";
	cin>>iValue;
	
	DigitX obj(iValue); // static
	
	obj.DisplayFrequency();

	return 0;
}
