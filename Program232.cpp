#include<iostream>
using namespace std;

template <class T>  // template header

void Display(T Arr[],int iSize)
{
	int iCnt = 0;
	
	for(iCnt = 0;iCnt < iSize;iCnt++)
	{
		cout<<Arr[iCnt]<<"\n";	
	}
	cout<<"\n";	
}
int main()
{
	int Datai[] = {10,20,30,40};
	Display(Datai,4);
	
	double Datad[] = {10.5,20.7,30.5,40.5};
	Display(Datad,4);
	
	double Datac[] = {'a','b','e','d'};
	Display(Datac,4);
	
	return 0;
}
