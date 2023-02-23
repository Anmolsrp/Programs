//Accept the string from user and strlen 

#include<stdio.h>

int StrLenXR(char *str)    // recursive approach
{
   // storage class static
	int iCnt = 0;
	
	while(*str != '\0')
	{
		iCnt++;
		str++;
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
