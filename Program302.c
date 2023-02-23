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
	
	printf("Enter the file name that you want to read : ");
	scanf("%s",Fname);
	
	fd = open(Fname,O_RDWR);  

	if(fd == -1)
	{
		return -1;
	}
	
	// read(kuthun,kashat,kiti);
	Length = read(fd,Data,13);	  // read() return value is the data length we have given
	
	printf("Data from file is \n");  // internally calls write system call
	write(1,Data,Length); 
	// 1 indicates display on terminal (standard output device)
	
	close(fd);
	
	return 0;
}


// 0 Standard Input Device    Keyboard
// 1 Standard Output Device   Console
// 2 Standard Error Device    Console
