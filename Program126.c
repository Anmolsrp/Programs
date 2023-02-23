// Accept a string and convert the string to upper

#include<stdio.h>

void struprX(char *str)
{
	int iCnt = 0;
	
	while(*str != '\0')
	{
		if((*str >= 'a') && (*str <= 'z'))
		{
			*str = *str - 32;
		}
		str++;
	}
}
int main()
{
	char Arr[20];
	
	printf("Please enter the string");
	scanf("%[^'\n']s",Arr);
	
	struprX(Arr); //strlwrx(100);
	
	printf("String after conversion is : %s\n",Arr);
	
	return 0;
	
}
