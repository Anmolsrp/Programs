#include<stdio.h>

void DisplayDigit(char *str)
{
	int i = 0;
	while(*str != '\0')
	{
		if((*str >= 'a') && (*str <= 'z'))
		{
			i = 0;
		}
		else
		{
			*str = *str;
		}
		str++;
	}
}
int main()
{
	char arr[20];
	
	printf("Enter the string : ");
	scanf("%[^'\n']s",arr);
	
	DisplayDigit(arr);
	
	printf("Modified string is %s\n",arr);
	
	return 0;
}
