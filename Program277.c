//Accept the string from user and strlen 

// Accept no. from the user and return the addition of digits

#include<stdio.h>

int StrLenXR(char *str)    // recursive approach
{
   // storage class static
	static int iCnt = 0;
	
	if(*str != '\0')
	{
		iCnt++;
		str++;
		StrLenXR(str);
	}
	return iCnt;
}

int main()
{
	printf("Inside main\n");
	char Arr[20];
	int iRet = 0;
	printf("Enter the string  : \n");
	scanf("%[^'\n']s",Arr);
	iRet = StrLenXR(Arr);
	printf("Length of string is : %d",iRet);
	
	printf("\n\nEnd of main\n");
	return 0;
}
