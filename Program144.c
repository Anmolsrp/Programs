#include<stdio.h>
#include<stdlib.h>  // for malloc and free

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
	PNODE temp = *First;
	
	newn->data = No;
	newn->next = NULL;
	
	if(*First == NULL)  // if linked list is empty
	{
		*First = newn;
	}
	else               // if linked list contains atleast one node
	{
		while(temp->next != NULL)
		{
			temp = temp -> next;
		}
		temp -> next = newn;
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

void DeleteFirst(PPNODE First)
{
	PNODE temp = *First;
	
	if(*First == NULL) // // empty ll
	{
		return;
	}
	else if((*First) -> next == NULL)  // 1 node in ll
	{
		free(*First);
		*First = NULL;
	}
	else  // More than 1 node in ll
	{
		(*First) = (*First) -> next;
		free(temp);
	}
}

void DeleteLast(PPNODE First)
{
	PNODE temp = *First;
	
	if(*First == NULL) // // empty ll
	{
		return;
	}
	else if((*First) -> next == NULL)  // 1 node in ll
	{
		free(*First);
		*First = NULL;
	}
	else  // More than 1 node in ll
	{
		while(temp -> next -> next != NULL)
		{
			temp = temp -> next;
		}
		free(temp -> next);
		temp -> next = NULL;
	}
}

void InsertAtPos(PPNODE First,int No, int iPos)
{
	int iCnt = 0;
	int NodeCnt = 0;
	PNODE newn = NULL;
	PNODE temp = NULL;
	NodeCnt = Count(*First);	
	
	if((iPos < 1) || (iPos > (NodeCnt + 1)))
	{
		printf("Invalid position\n");
		return;
	}
	
	if(iPos == 1)
	{
		InsertFirst(First,No);
	}
	else if(iPos == NodeCnt+1)
	{
		InsertLast(First,No);
	}
	else
	{
		newn = (PNODE)malloc(sizeof(NODE));
		
		newn->data = No;
		newn->next = NULL;
		
		temp = *First;
		
		for(iCnt = 1;iCnt < iPos - 1;iCnt++)
		{
			temp = temp -> next;
		}
		newn -> next = temp -> next;
		temp ->next = newn;
	}
}

void DeleteAtPos(PPNODE First,int iPos)
{
	PNODE temp1 = NULL;
	PNODE temp2 = NULL;
	int iCnt = 0, NodeCnt = 0;
	
	NodeCnt = Count(*First);
	
	if((iPos < 1) || (iPos > NodeCnt +1))
	{
		printf("Invalid postion\n");
		return;
	}
	
	if(iPos == 1)
	{
		DeleteFirst(First);
	}
	else if(iPos == NodeCnt)
	{
		DeleteLast(First);
	}
	else
	{
		temp1 = *First;
		
		for(iCnt = 1;iCnt < iPos-1;iCnt++)
		{
			temp1 = temp1 -> next;
		}
		temp2 = temp1->next;
		temp1 -> next = temp2->next;  // temp1->next = temp1->next->next;
		free(temp2);
		
	}
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
	
	InsertLast(&Head,101);
	InsertLast(&Head,111);
	InsertLast(&Head,121);
	
	Display(Head);
	iRet = Count(Head);
	
	printf("Number of nodes are : %d\n",iRet);	
	
	InsertAtPos(&Head,105,5);	
	Display(Head);
	
	iRet = Count(Head);
	printf("Number of nodes are : %d\n",iRet);
	
	DeleteAtPos(&Head,5);	
	Display(Head);
	
	iRet = Count(Head);
	printf("Number of nodes are : %d\n",iRet);
	
	DeleteFirst(&Head);
	Display(Head);
	
	iRet = Count(Head);
	printf("Number of nodes are : %d\n",iRet);	
	
	DeleteLast(&Head);
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
