// Demonstraton of iteration using while loop

#include<stdio.h>

void Display(int iNo)
{	
	register int iCnt = 0;
	
	while(iCnt < iNo)
	{
		printf("Jay Ganesh...\n");
		iCnt++;
	}
	
}

int main()
{
	int iValue = 0;
	
	printf("Enter the number of iteration : \n");
	scanf("%d",&iValue);
	
	Display(iValue);
	
	return 0;
}
