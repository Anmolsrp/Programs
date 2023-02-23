#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>   // filecontrol.h  // if error occurs on linux or macos then use this library

// O_RDONLY   Open for reading
// O_WRONLY   Open for writing
// O_RDWR	  Open for reading and writing

int main()
{
	char Fname[20];
	int fd = 0;          // file descripter
	char Data[] = "Marvellous";      // Data[] this character array is buffer      
	
	printf("Enter the file name that you want to open : ");
	scanf("%s",Fname);
	
	fd = open(Fname,O_RDWR);
	
	if(fd == -1)
	{
		printf("Unabel to open file\n");
	}
	else
	{
		printf("File is successfully opened with FD %d\n",fd);
		write(fd,Data,11);  // write(fd,Data_in_file,no.of characters
	}
	
	return 0;
}
