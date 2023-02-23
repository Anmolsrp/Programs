#include<stdio.h>

/////////////////////////////////////////////////////////////////
//
//	   Function Name : Multiplication
//	   Input : Integer
//	   Output : Integer
//	   Description : Multiplication of two integer numbers
//	   Date : 11/10/2022
//	   Author Name : Anmol Shankarrao Patil
//	
////////////////////////////////////////////////////////////////


int Multiplication(int iNo1,int iNo2)
{
	int iAns = 0;
	
	iAns = iNo1 * iNo2;
	
	return iAns;
}
int main()
{
	int iValue1 = 0; int iValue2 = 0,iRet = 0;
	
	printf("Enter the two nummbers : \n");
	scanf("%d %d",&iValue1,&iValue2);
	
	iRet = Multiplication(iValue1,iValue2);
	
	printf("Multiplication is %d",iRet); 
	
	return 0;
}
