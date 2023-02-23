//Accept file name from the user and cpoy the contents of whole file into another
#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>   // filecontrol.h  // if error occurs on linux or macos then use this library
#include<string.h>

// O_RDONLY   Open for reading
// O_WRONLY   Open for writing
// O_RDWR	  Open for reading and writing

int main()
{
	char Fname1[20];
	char Fname2[20];
	int fdSource = 0;          // file descripter
	int fdDest = 0;
	int Length = 0,iCount = 0,i = 0;
	char Data[100];
	
	printf("Enter the file name which contains data : ");
	scanf("%s",Fname1);
	
	fdSource = open(Fname1, O_RDONLY);
	
	if(fdSource == -1)
	{
		printf("Unable to open file\n");
		return -1;
	}
	
	printf("Enter the file name that you want to create : ");
	scanf("%s",Fname2);
	
	fdDest = creat(Fname2,0777);
	
	if(fdDest == -1)
	{
		printf("Unable to create file\n");
		return -1;
	}
	
	while((Length = read(fdSource,Data,sizeof(Data))) != 0)
	{
		write(fdDest,Data,Length);
		  //(kuthe,kay,kiti)
		  //(terminal,file_data,length_of_data)
	}
	
	close(fdSource);
	close(fdDest);
	
	return 0;
}


// 0 Standard Input Device    Keyboard
// 1 Standard Output Device   Console
// 2 Standard Error Device    Console
