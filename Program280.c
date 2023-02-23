//Accept the string from user and strlen 

#include<stdio.h>

int CountSmallR(char *str)    // recursive approach
{
   // storage class static
	static int iCnt = 0;
	
	if(*str != '\0')
	{
		if((*str >= 'a') && (*str <= 'z'))
		{
			iCnt++;
		} 
		str++;
		SmallCharR(str);
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
	iRet = CountSmallR(Arr);
	printf("Small character's count is: %d",iRet);
	
	printf("\n\nEnd of main\n");
	return 0;
}
