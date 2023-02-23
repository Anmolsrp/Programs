#include<iostream>
using namespace std;

class ArrayX
{
	public:
		int *Arr;
		int iSize;
		
		ArrayX(int i)
		{
			iSize = i;
			Arr = new int[i];  // Arr = (int *)malloc (iSize * sizeof(int))
		}
		
		~ArrayX()
		{
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

int main()
{
	ArrayX obj(5);  // hard coded
	 
	obj.Accept();
	obj.Display();
	
	return 0;
}
