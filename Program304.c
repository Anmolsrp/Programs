//Accept file name from the user and display the contents of whole file and the size of file

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
	int Length = 0,iSize = 0;
	char Data[100];
	
	printf("Enter the file name that you want to open : ");
	scanf("%s",Fname);
	
	fd = open(Fname, O_RDONLY);
	
	if(fd == -1)
	{
		printf("Unable to open file\n");
		return -1;
	}
	
	while((Length = read(fd,Data,sizeof(Data))) != 0)
	{
		iSize = iSize + Length;
		write(1,Data,Length);
	}
	printf("Total bytes we have read : %d",iSize);
	
	close(fd);
	
	return 0;
}


// 0 Standard Input Device    Keyboard
// 1 Standard Output Device   Console
// 2 Standard Error Device    Console
