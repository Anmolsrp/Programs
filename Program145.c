#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
struct node
{
	int data;
	struct node *next;          //  | prev | data | next | // node diagram
 	struct node *prev;  // X
};
typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE First, int No)
{
	PNODE newn = (PNODE)malloc(sizeof(NODE));
	
	newn->data = No;
	newn->next = NULL;
	newn->prev = NULL;   // X
	
	if(*First == NULL)
	{
		*First = newn;
	}
	else
	{
		newn->next = *First;
		(*First)->prev = newn; // X
		*First = newn;
	}
}

void InsertLast(PPNODE First, int No)
{
	PNODE newn = (PNODE)malloc(sizeof(NODE));
	PNODE temp = *First;
	
	newn->data = No;
	newn->next = NULL;
	newn->prev = NULL;   // X
	
	if(*First == NULL)
	{
		*First = newn;
	}
	else
	{
		while(temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newn;
		newn->prev = temp;  // X
	}
}

void DeleteFirst(PPNODE First)
{	
	if(*First == NULL)  // LL is empty
	{
		return;	
	}
	else if((*First) -> next == NULL) // LL contains 1
	{
		free(*First);
		*First = NULL;
	}
	else
	{
		*First = (*First)->next;
		free((*First)->prev);    //  X
		(*First)->prev = NULL;	//   X
	}
}

void DeleteLast(PPNODE First)
{
	PNODE temp = *First;
	
	if(*First == NULL)  // LL is empty
	{
		return;	
	}
	else if((*First) -> next == NULL) // LL contains 1
	{
		free(*First);
		*First = NULL;
	}
	else
	{
		while(temp->next->next != NULL)
		{
			temp = temp->next;
		}
		free(temp->next);
		temp->next = NULL;
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
		newn->prev = NULL;  // X
		
		temp = *First;
		
		for(iCnt = 1;iCnt < iPos - 1;iCnt++)
		{
			temp = temp -> next;
		}
		newn->next = temp->next;
		temp ->next->prev = newn;    // X
		temp->next = newn;
		newn->prev = temp;    // X
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
		temp2->next->prev = temp1;    // X
		free(temp2);
		
	}
}

void Display(PNODE First)
{
	printf("Elements of linked list\n");
	
	printf("NULL<=>");
	while(First != NULL)
	{
		printf("| %d |<=>",First->data);
		First = First->next;
	}
	printf("NULL\n\n");
}

int Count(PNODE First)
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
	PNODE Head = NULL;
	int iRet = 0;
	Display(Head);
		
	InsertFirst(&Head,51);
	Display(Head);
	InsertFirst(&Head,21);
	Display(Head);
	InsertFirst(&Head,11);
	Display(Head);
	
//	Display(Head);
//	iRet = Count(Head);
//	printf("Number of nodes in linked list is : %d\n\n",iRet);
	
	InsertLast(&Head,101);
	Display(Head);
	InsertLast(&Head,111);
	Display(Head);
	InsertLast(&Head,121);
	Display(Head);
	
//	Display(Head);
	iRet = Count(Head);
	printf("Number of nodes in linked list is : %d\n\n",iRet);
	
	InsertAtPos(&Head,105,5);
	Display(Head);
	
	iRet = Count(Head);
	printf("Number of nodes in linked list is : %d\n\n",iRet);
	
	DeleteAtPos(&Head,5);
	Display(Head);
	
	iRet = Count(Head);
	printf("Number of nodes in linked list is : %d\n\n",iRet);
	
	DeleteFirst(&Head);
	Display(Head);
	DeleteLast(&Head);
	Display(Head);
	
	iRet = Count(Head);
	printf("Number of nodes in linked list is : %d\n\n",iRet);
	
	return 0;	
}
