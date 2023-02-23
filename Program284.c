//Accept the string from user print the pattern

#include<stdio.h>

void DisplayR(char *str)    // recursive approach
{
	
	if(*str != '\0')
	{
	  	// head recursion
		printf("%s\n",str);	// printing when stack frame starts
		DisplayR(++str);
		printf("%s\n",str);   // printing when backtracking starts
		
		
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
