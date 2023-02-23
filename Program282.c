//Accept the string from user and print the pattern 

#include<stdio.h>

void DisplayR(char *str)    // recursive approach
{
	
	if(*str != '\0')
	{
		printf("%s\n",str);
		str++;
		DisplayR(str);    // tail recursion
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
