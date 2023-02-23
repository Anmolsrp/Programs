#include<stdio.h>

int main(int argc, char *argv[]) // to take command line arguments 
{
	// argc - argument count and argv - argument vector
	
	printf("Number of arguments are : %d\n",argc);
	
	printf("Name of executable is : %s\n",argv[0]);
	
	if(argv != 3)
	{
		printf("Invalid number of arguments");
	}
	
	return 0;
}
