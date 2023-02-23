#include<iostream>
using namespace std;

// Problems on  n numbers

class ArrayX
{
	public:
		int *Arr;
		int iSize;
		
		ArrayX(int iLength)
		{
			iSize = iLength;
			Arr = new int(iSize);
		}
		
		void Accept()
		{
			cout<<"Please enter the numbers : "<<"\n";
			int iCnt = 0;
			
			for(iCnt = 0;iCnt < iSize;iCnt++)
			{
				cin>>Arr[iCnt];	
			}	
		}
		
		void Display()
		{
			int iCnt = 0;
			cout<<"Array elements : \n";
			
			for(iCnt = 0;iCnt < iSize;iCnt++)
			{
				cout<<Arr[iCnt]<<"\t";
			}
			cout<<"\n";
				
		}	
};

int main()
{
	int iLength = 0;
	
	cout<<"Enter the Number of elements : ";
	cin>>iLength;
	
	ArrayX obj(iLength);
	
	obj.Accept();
	obj.Display();
	
	return 0;
}
