// Accept n numbers from the users and perform there addition

#include<stdio.h>
#include<stdlib.h>  // malloc() , calloc() , realloc() and free()

int main()
{
	int iArr[5];
	
	printf("Enter the elements : \n");
	scanf("%d\n",&iArr[0]);
	scanf("%d\n",&iArr[1]);
	scanf("%d\n",&iArr[2]);
	scanf("%d\n",&iArr[3]);
	scanf("%d\n",&iArr[4]);
	
	printf("Elements from array are : \n");
	
	printf("%d\n",iArr[0]);
	printf("%d\n",iArr[1]);
	printf("%d\n",iArr[2]);
	printf("%d\n",iArr[3]);
	printf("%d\n",iArr[4]);
	
	return 0;
}
