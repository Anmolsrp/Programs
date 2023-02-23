#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>   // filecontrol.h  // if error occurs on linux or macos then use this library
#include<string.h>

// O_RDONLY   Open for reading
// O_WRONLY   Open for writing
// O_RDWR	  Open for reading and writing

int main(int argc, char *argv[])
{
	int fdSource = 0;          // file descripter
	int fdDest = 0;
	int Length = 0;
	char Data[100];
	
	fdSource = open(argv[1], O_RDONLY);
	
	if(fdSource == -1)
	{
		printf("Unable to open file\n");
		return -1;
	}
	
	
	
	fdDest = creat(argv[2],0777);
	
	if(fdDest == -1)
	{
		printf("Unable to create file\n");
		return -1;
	}
	
	while((Length = read(fdSource,Data,sizeof(Data))) != 0)
	{
		write(fdDest,Data,Length);
	}
	
	close(fdSource);
	close(fdDest);
	
	printf("Data Successfully copied....\n");
	
	return 0;
}
