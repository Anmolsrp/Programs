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
		
		~ArrayX()
		{
			delete []Arr;
			cout<<"Memory Deallocated";	
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
		
		int SumEven()   // business logic
		{
		  	int iCnt = 0,iSumEven = 0;
			
			for(iCnt = 0;iCnt < iSize;iCnt++)
			{
				if((Arr[iCnt] % 2) == 0)
				{
					iSumEven = iSumEven + Arr[iCnt];
				}
			}
			return iSumEven;
			cout<<"\n";		
		}
		
		int SumOdd()   // business logic
		{
		  	int iCnt = 0,iSumOdd = 0;
			
			for(iCnt = 0;iCnt < iSize;iCnt++)
			{
				if((Arr[iCnt] % 2) != 0)
				{
					iSumOdd = iSumOdd + Arr[iCnt];
				}
			}
			return iSumOdd;
			cout<<"\n";		
		}		
};

int main()
{
	int iLength = 0,iRet = 0;
	
	cout<<"Enter the Number of elements : ";
	cin>>iLength;
	
	ArrayX obj(iLength);
	
	obj.Accept();
	obj.Display();
	
	iRet = obj.SumEven();
	cout<<"Addition of even elements in array : "<<iRet<<"\n";
	
	iRet = obj.SumOdd();
	cout<<"Addition of odd elements in array : "<<iRet<<"\n";
	
	return 0;
}
