// Accept a character and and convert small to upper character and upper to small

#include<stdio.h>

char CharToggle(char ch)
{
	if((ch >= 'A') && (ch <= 'Z'))
	{
		return ch+32;
	}
	else if((ch >= 'a') && (ch <= 'z')) 
	{
		return ch-32;
	}
	else
	{
		return ch;
	}
}
int main()
{
	char cValue = '\0';
	char cRet = '\0';
	
	printf("Enter the character\n");
	scanf("%c",&cValue);
	
	cRet = CharToggle(cValue);
	
	printf("Toggled character is : %c\n",cRet);

	return 0;	
	
}
