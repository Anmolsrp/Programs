// Accept a string from user and copy it into another Array and toggle

#include<stdio.h>
// Time complexity : N+N/2
void strrevX(char *str)
{
	char *start = str;
	char *end = str;
	char temp = '\0';
	
	while(*end != '\0')
	{
		end++;
	}
	end--;
	
	while(start < end)
	{
		temp = *start;
		*start = *end;
		*end = temp; 	
		
		start++;
		end--;
	}	
}

int main()
{
	char Arr[20];
	char Brr[20];
	
	printf("Enter the string : \n");
	scanf("%[^'\n']s",Arr);

	strrevX(Arr);  //strcptX(100,200)
	printf("Reverse string is : %s\n",Arr);	
	return 0;
}
