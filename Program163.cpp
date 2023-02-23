#include<iostream>
using namespace std;

class ArrayX
{
	public:
		int *Arr;
		int iSize;
		
		ArrayX(int i)
		{
			cout<<"Allocating the memory of resources..."<<"\n";
			iSize = i;
			Arr = new int[i];  // Resource allocation
		}
		
		~ArrayX()
		{
			cout<<"Deallocating the memory of resources..."<<"\n";
			delete []Arr;
		}
		
		void Accept()
		{
			cout<<"Enter the elements of array : "<<"\n";
			
			for(int iCnt = 0;iCnt < iSize;iCnt++)
			{
				cin>>Arr[iCnt];  // scanf("%d",&Arr[iCnt]);	
			}
		}
		
		void Display()
		{
			cout<<"Elements of array are : "<<"\n";

			for(int iCnt = 0;iCnt < iSize;iCnt++)
			{
				cout<<Arr[iCnt]<<"\t";  // scanf("%d",&Arr[iCnt]);	
			}
			cout<<"\n";
		}
};

class MarvellousLB : public ArrayX
{
		public:
			
			MarvellousLB(int i) : ArrayX(i) // base member intialization
			{ }         // explicitly calling the constructor of ArrayX
			
			// Template for problems on n numbers
			void Function_Name()
			{
				// logic
			}
			
};

int main()
{
	int iLength = 0;
	int iRet = 0;
	
	cout<<"Enter the size of array : "<<"\n";
	cin>>iLength;
	
	MarvellousLB *obj = new MarvellousLB(iLength); // dynamic
	
	obj->Accept();
	obj->Display();
	iRet = obj->Minimum();
	
	cout<<"Smallest element is : "<<iRet<<"\n";
	
	delete obj;
	
	return 0;
}
