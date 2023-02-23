//Accept the string from user and strlen 

// Accept no. from the user and return the addition of digits

#include<stdio.h>

int CountCapitalR(char *str)    // recursive approach
{
   // storage class static
	static int iCnt = 0;
	
	if(*str != '\0')
	{
		if((*str >= 'A') && (*str <= 'Z'))
		{
			iCnt++;
		} 
		str++;
		CountCapitalR(str);
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
	iRet = CountCapitalXR(Arr);
	printf("Captial character's count is: %d",iRet);
	
	printf("\n\nEnd of main\n");
	return 0;
}
