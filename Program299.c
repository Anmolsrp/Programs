#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>   // filecontrol.h  // if error occurs on linux or macos then use this library
#include<string.h>

// O_RDONLY   Open for reading
// O_WRONLY   Open for writing
// O_RDWR	  Open for reading and writing

int main()
{
	char Fname[20];
	int fd = 0;          // file descripter
	int Length = 0;
	char Data[100];
	
	printf("Enter the file name that you want to open : ");
	scanf("%s",Fname);
	
	fd = open(Fname,O_RDWR);
	
	if(fd == -1)
	{
		return -1;
	}
	
	printf("Enter the data that you want to write in the file : \n");
	scanf(" %[^'\n']s",Data);
	
	Length = strlen(Data);
	
	// write(kashat,kay,kiti);
	write(fd,Data,Length);
	
	return 0;
}
