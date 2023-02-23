//Accept the string from user and strlen 

#include<stdio.h>

int DisplayR(char *str)    // recursive approach
{
	
	if(*str != '\0')
	{
		printf("%c\n",*str);
		str++;
		DisplayR(str);
	}
}

int main()
{
	printf("Inside main\n");
	char Arr[20];
	printf("Enter the string  : \n");
	scanf("%[^'\n']s",Arr);
	DisplayR(Arr);
	
	printf("\n\nEnd of main\n");
	return 0;
}
