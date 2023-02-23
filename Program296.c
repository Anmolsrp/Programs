#include<stdio.h>
#include<stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include<fcntl.h>   // filecontrol.h  // if error occurs on linux or macos then use this library

// O_RDONLY   Open for reading
// O_WRONLY   Open for writing
// O_RDWR	  Open for reading and writing

int OpenFile(char Name[])
{
	int fd = 0;
	
	fd = open(Name,O_RDWR);
	return fd;
}
int main()
{
	char Fname[20];
	int fd = 0;  // file descripter
	
	printf("Enter the file name that you want to open : ");
	scanf("%s",Fname);
	
	fd = OpenFile(Fname);
	
	if(fd == -1)
	{
		printf("Unabel to open file\n");
	}
	else
	{
		printf("File is successfully opened with FD %d\n",fd);
	}
	
	return 0;
}
