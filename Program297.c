#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>   // filecontrol.h  // if error occurs on linux or macos then use this library
//#include<unistd.h>  Universal std

// O_RDONLY   Open for reading           // all are #define macro
// O_WRONLY   Open for writing
// O_RDWR	  Open for reading and writing

int main()
{
	char Fname[20];
	int fd = 0;  // file descripter
	
	printf("Enter the file name that you want to open : ");
	scanf("%s",Fname);
	
	fd = open(Fname,O_RDWR);
	
	if(fd == -1)
	{
		printf("Unable to open file\n");
	}
	else
	{
		printf("File is successfully opened with FD %d\n",fd);
	}
	
	return 0;
}
