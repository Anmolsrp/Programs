//

#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
struct node   // self referencing structure
{
	int data;
	struct node *next;   
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE First, int No)
{
	
}

void Display(PNODE First)
{
	
}

int main()
{
	PNODE Head = NULL;
	
	InsertFirst(&Head, 51);
	InsertFirst(&Head, 21);
	InsertFirst(&Head, 11);
	
	Display(Head);
	
	return 0;	
}

/*   Functions

	void InsertFirst(PPNODE First, int No)
	void InsertLast(PPNODE First,int No)
	void InsertAtPos(PPNODE First,int No,int Pos) // AT POSITION
	
	void DeleteFirst(PPNODE First)
	void DeleteLast(PPNODE First)
	void DeleteAtPos(PPNODE First)
	
	void Display(PPNODE First)
	int Count(PPNODE First)
*/
/////////////////////////////////////////
/* Function calls

	// call by address
	InsertFirst(&Head,11)
	InsertLast(&Head,11)       
	InsertAtPos(&Head,11.5)
	
	// call by address
	DeleteFirst(&Head)
	DeleteLast(&Head)         
	DeleteAtPos(&Head,5)
	
	// call by value
	Display(Head)           
	Count(Head)
