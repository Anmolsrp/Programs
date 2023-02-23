// Reverse singly linked list

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#pragma pack(1)
struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE First, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));      

    newn->data = no;
    newn->next = NULL;

    if(*First == NULL) 
    {
        *First = newn;
    }
    else                
    {
        newn->next = *First;
        *First = newn;
    }
}

void Display(PNODE First)
{
    printf("Elements from the Linked List are : \n");

    while(First != NULL)
    {
        printf("| %d |-> ",First->data);
        First = First -> next;
    }
    printf("NULL \n");
}

void Reverse(PPNODE First)
{
	PNODE Previous, Next, Current;
	
	Previous = NULL;
	Next = NULL;
	Current = *First;
	
	while(Current != NULL)
	{
		Next = Current->next;
		Current->next = Previous;
		Previous = Current;
	
		Current = Next;
	}
	*First = Previous;    // call by address keeping address in to teacher's Head
}

int main()
{
    PNODE Head = NULL;
   
   	InsertFirst(&Head, 101);
    InsertFirst(&Head, 51);
    InsertFirst(&Head, 21);// InsertFirst(60,21)
    InsertFirst(&Head, 11);// InsertFirst(60,11)
    //InsertFirst(&Head, 11);// InsertFirst(60,11)
    
    Display(Head);
    
    Reverse(&Head);
    
    Display(Head);
    
     Reverse(&Head);
     
     Display(Head);
    
    
    return 0;
}

