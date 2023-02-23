//Accept string from user and find the 'a' occurence in the string.

#include<stdio.h>

int Countch(char *str)
{
	int iCnt = 0;
	
	while(*str != '\0')
	{
		if(*str == 'a')
		{
			iCnt++;
		}
		str++;
	}
	return iCnt;
}
int main()  //client
{
	char Arr[10];
	int iRet = 0;
	
	printf("Enter the string : ");
	scanf("%[^'\n']s",Arr);
	
	iRet = Countch(Arr);
	printf("Occurence of a is : %d",iRet);
	
	return 0;
}
