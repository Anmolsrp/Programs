#include<stdio.h>
#include<stdlib.h>  # for malloc and free

#pragma pack(1)
struct node
{
	int data;
	struct node *next;
};
typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE First, int No)   // call by address
{
	PNODE newn = (PNODE)malloc(sizeof(NODE));  // 1 Allocate memory
	
	newn->data = No;
	newn->next = NULL;
	
	if(*First == NULL)  // if linked list is empty
	{
		*First = newn;
	}
	else               // if linked list contains atleast one node
	{
		newn->next = *First;
		*First = newn;
	}
}


void InsertLast(PPNODE First, int No)   // call by address
{
	PNODE newn = (PNODE)malloc(sizeof(NODE));  // 1 Allocate memory
	
	newn->data = No;
	newn->next = NULL;
	
	if(*First == NULL)  // if linked list is empty
	{
		*First = newn;
	}
	else               // if linked list contains atleast one node
	{
		
	}
	
}

void Display(PNODE First)  // Call by value
{
	printf("Elements from the linked list are : \n");
	
	while(First != NULL)
	{
		printf("| %d |-> ",First->data);
		First = First->next;
	}
	printf("NULL \n\n");
}

int Count(PNODE First)  // Call by value
{
	int iCnt = 0;
	
	while(First != NULL)
	{
		iCnt++;
		First = First->next;
	}
	return iCnt;
}


int main()
{
	// struct node * Head = NULL;
	PNODE Head = NULL;
	int iRet = 0;
	
	InsertFirst(&Head, 51);	// call InsertFirst(60,51)
	InsertFirst(&Head, 21);	// call InsertFirst(60,21)
	InsertFirst(&Head, 11);	// call InsertFirst(60,11)
	
	Display(Head);
	iRet = Count(Head);
	
	printf("Number of nodes are : %d\n",iRet);
	
	return 0;
}

/*
	// Call by address
	InsertFirst()
	InsertLast()
	InsertAtPosition()
	
	DeleteFirst()
	DeleteLast()
	DeleteAtPosition()
	
	// call by value
	Display()
	Count()
*/
