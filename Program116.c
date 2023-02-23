// Accept the string and count the small characters int the string

#include<stdio.h>

int Countch(char *str)
{
	int iCnt = 0;
	
	while(*str != '\0')
	{
		if((*str >= 'a') && (*str <= 'z'))
		{
			iCnt++;
		}
		str++;
	}
	return iCnt;
}
int main()
{
	char Arr[10];
	int iRet = 0;
	
	printf("Enter the string : \n");
	scanf("%[^'\n']s",Arr);
	
	iRet = Countch(Arr);
	printf("Small Character count is : %d",iRet);
	
	return 0;
}
