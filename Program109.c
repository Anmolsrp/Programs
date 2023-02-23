#include<stdio.h>

int main()
{
	char Arr[30];
	char ch='\0';
	
	printf("Enter the full name : ");
	scanf("%[^'\n']s",Arr); // regular expression
	// take the input till the \n
	// ^ is not

	// to overcome the problem of not accepting another scanf() use space before %c	
//	printf("Enter the full name : \n");
//	
//	scanf(" %c",&ch);  
	
	printf("Full Name is :%s ",Arr); // Full name will be printed because it accepts white spaces too
}
