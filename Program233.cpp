#include<iostream>
using namespace std;

template <class T>
T DisplayAddition(T Arr[],int iSize)
{
	int iCnt = 0;
	T Sum;
	
	for(iCnt = 0;iCnt < iSize;iCnt++)
	{
		Sum = Sum + Arr[iCnt];		
	}
	return Sum;
}
int main()
{
	int Datai[] = {10,20,30,40};
	int iRet = DisplayAddition(Datai,4);
	cout<<"Addition of integers : "<<iRet<<"\n";
	
	float Dataf[] = {11.2,3.7,3.8,4.3,6.9};
	float fRet = DisplayAddition(Dataf,5);
	cout<<"Addition of floats : "<<fRet<<"\n";
	
	double Datad[] = {10.5,20.7,30.8,40.3,67.9};
	double dRet = DisplayAddition(Datad,5);
	cout<<"Addition of doubles : "<<dRet<<"\n";
}
