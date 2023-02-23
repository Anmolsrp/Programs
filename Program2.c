#include<stdio.h>

int Addition(int iNo1,int iNo2)
{
		int iAdd = 0;
		
		iAdd = iNo1 + iNo2;
		return iAdd;
}

int main()
{
	int iValue1 = 0,iValue2 = 0,iAns = 0;
	printf("Enter the first numbers : \n");
	scanf("%d",&iValue1);
	
	printf("Enter the second numbers : \n");
	scanf("%d",&iValue2);
	
	
	iAns = Addition(iValue1,iValue2);
	printf("Addition is : %d",iAns);
	
	return 0;
}

// gcc Program2.c -o Myexe
