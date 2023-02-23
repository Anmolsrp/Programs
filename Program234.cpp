#include<iostream>
using namespace std;

template <class T>  // template header
T Maximum(T Arr[],int iSize)   // function template
{
	int iCnt = 0;
	T Max = Arr[0];
	
	for(iCnt = 0;iCnt < iSize;iCnt++)
	{
		if(Arr[iCnt] > Max)
		{
			Max = Arr[iCnt];	
		}	
	}
	return Max;
}
int main()
{
	int Datai[] = {110,120,302,40};
	int iRet = Maximum(Datai,4);
	cout<<"Maximum of integers : "<<iRet<<"\n";
	
	float Dataf[] = {11.2,3.7,3.8,4.3,6.9};
	float fRet = Maximum(Dataf,5);
	cout<<"Maximum of floats : "<<fRet<<"\n";
	
	double Datad[] = {10.5,20.7,30.8,40.3,67.9};
	double dRet = Maximum(Datad,5);
	cout<<"Maximum of doubles : "<<dRet<<"\n";
}
