// Accept a string and convert the string to lower

#include<stdio.h>

void strlwrX(char *str)
{
	int iCnt = 0;
	
	while(*str != '\0')
	{
		if((*str >= 'A') && (*str <= 'Z'))
		{
			*str = *str + 32;
		}
		str++;
	}
}
int main()
{
	char Arr[20];
	
	printf("Please enter the string");
	scanf("%[^'\n']s",Arr);
	
	strlwrX(Arr); //strlwrx(100);
	
	printf("String after conversion is : %s\n",Arr);
	
	return 0;
	
}
