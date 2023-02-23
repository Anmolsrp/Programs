// Accept the string and count the capital characters int the string

#include<stdio.h>

int Countch(char *str)
{
	int iCnt = 0;
	
	while(*str != '\0')
	{
		if((*str >= 'A') && (*str <= 'Z'))
		{
			iCnt++;
		}
		str++;
	}
}
int main()
{
	char Arr[10];
	
	printf("Enter the string : \n");
	scanf("%[^'\n']s",Arr);
	
	iRet = Countch(Arr);
	printf("Captal character count in string is : %d",iRet);
	
	return 0;
}
