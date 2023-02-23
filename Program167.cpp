#include<iostream>
using namespace std;

//Input : 7894232
//Output : 2 occures 2 time
//         3 occures 1 time
//		   4 occures 1 time
//		   9 occures 1 time
//		   8 occures 1 time
//		   7 occures 1 time

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
			
			for(int iCnt = 0; iCnt < 10; iCnt++)
			{
				if(Frequency[iCnt] > 0)
				{
					cout<<iCnt<<" occurs at "<<Frequency[iCnt]<<" times"<<"\n";
				}
			}
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
