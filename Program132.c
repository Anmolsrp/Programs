// Accept a string from user and copy it into another Array and toggle

#include<stdio.h>

void strcpyToggle(char *src, char *dest)
{
	while(*src != '\0')
	{
		if((*src >= 'A') && (*src <= 'Z'))
		{
			*dest = *src + 32;
		}
		else if((*src >='a') && (*src <= 'z'))
		{
			*dest = *src - 32;
		}
		else
		{
			*dest = *src;
		}
		*src++;
		*dest++;
	}
	*dest = '\0'; // give it explicitly otherwise while loop can go to infinite loop
	
}

int main()
{
	char Arr[20];
	char Brr[20];
	
	printf("Enter the string : \n");
	scanf("%[^'\n']s",Arr);

	strcpyToggle(Arr,Brr);  //strcptX(100,200)
		
	printf("Copied string is : %s\n",Brr);
	printf("Original string is : %s\n",Arr);
	return 0;
}
