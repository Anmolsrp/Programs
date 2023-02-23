#include<iostream>
using namespace std;

template <class T>  // template header
T Addition(T i,T j)
{
	T ans;
	ans = i + j;
	
	return ans;
}

int main()
{
	double a = 11.9, b = 10.1, Ret = 0.0;
	
	Ret = Addition(a,b);
	
	cout<<"Addition is : "<<Ret<<"\n";
	
	return 0;
}
