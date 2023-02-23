// Accept string from user and accept one character and find that character occurrence

#include<stdio.h>

int CountFrequency(char *str ,char ch)
{
	int iCnt = 0;
	
	while(*str != '\0')
	{
		if(*str == ch)
		{
			iCnt++;
		}
		str++;
	}
	return iCnt;
}
int main()
{
	char Arr[20],cValue = '\0';
	int iRet = 0;
	
	printf("Enter the string : \n");
	scanf("%[^'\n']s",Arr);
	
	printf("Enter the character to find : ");
	scanf(" %c",&cValue);
	
	iRet = CountFrequency(Arr,cValue);
	printf("Character %c occurence in string is  %d",cValue,iRet);
	
	return 0;
	
}
