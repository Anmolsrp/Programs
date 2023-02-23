#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
struct node
{
	int data;
	struct node *next;
};
typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

InsertFirst(PPNODE First,int No)     // call by address
{
	PNODE newn = (PNODE)malloc(sizeof(NODE));
	
	newn->data = No;
	newn->next = NULL;
	
	if(*First == NULL)     // if linked list is empty
	{
		*First = newn;
	}
	else                  // if linked list contains atleast one node
	{
		newn->next = *First;
		*First = newn;
	}
}

InsertLast(PPNODE First,int No)
{
	PNODE newn = (PNODE)malloc(sizeof(NODE));
	PNODE temp = *First;
	
	newn->data = No;
	newn->next = NULL;

	if(*First == NULL)            // empty linked list
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
	}
}

void DeleteFirst(PPNODE First)
{
	PNODE temp = *First;
	
	if(*First == NULL)
	{
		return;
	}
	else if((*First)->next == NULL)
	{
		free(*First);
		*First = NULL;
	}
	else
	{
		*First = temp->next;
		free(temp);
	}
}

void DeleteLast(PPNODE First)
{
	PNODE temp = *First;
	
	if(*First == NULL)
	{
		return;
	}
	else if((*First)-> next == NULL)
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
void DisplayR(PNODE First)
{
	
	if(First != NULL)
	{
		printf("| %d |->",First->data);
		First = First->next;
		DisplayR(First);
	}

}

int CountR(PNODE First)
{
	static int iCnt = 0;
	
	if(First != NULL)
	{
		iCnt++;
		First = First->next;
		CountR(First);
	}
	return iCnt;
}

void InsertAtPos(PPNODE First,int No,int iPos)
{
	int NodeCnt = 0;
	int iCnt = 0;
	
	PNODE temp = NULL;
	PNODE newn = NULL;
	
	NodeCnt = CountR(*First); 
	
	if((iPos < 1) || (iPos > (NodeCnt+1)))
	{
		printf("Invalid Position\n");
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
		PNODE newn = (PNODE)malloc(sizeof(NODE));
		newn->data = No;
		newn->next = NULL;
		
		temp = *First;
		
		for(iCnt = 1;iCnt < iPos - 1;iCnt++)
		{
			temp = temp->next;
		}
		newn->next = temp->next;
		temp->next = newn;
	}
}

void DeleteAtPos(PPNODE First,int iPos)
{
	int iCnt = 0;
	int NodeCnt = 0;
	NodeCnt = CountR(*First);
	PNODE temp1 = NULL;
	PNODE temp2 = NULL;
	
	if(iPos < 1 || (iPos > (NodeCnt+1)))
	{
		printf("Invalid position\n");
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
			temp1 = temp1->next;
		}
		temp2 = temp1->next;
		temp1->next = temp1->next->next;
		free(temp2);
	}
}
int main()
{
	PNODE Head = NULL;
	int iRet = 0;
	
	InsertFirst(&Head,51);
	DisplayR(Head);
	InsertFirst(&Head,21);
	DisplayR(Head);
	InsertFirst(&Head,11);
	DisplayR(Head);

	InsertLast(&Head,111);
	DisplayR(Head);
	InsertLast(&Head,101);
	DisplayR(Head);
	
	DeleteFirst(&Head);
	DisplayR(Head);
	
	DeleteLast(&Head);
	DisplayR(Head);
	
	InsertAtPos(&Head,121,2);
	DisplayR(Head);
	
	InsertAtPos(&Head,44,3);
	DisplayR(Head);
	
	DeleteAtPos(&Head,4);
	DisplayR(Head);
	
	DeleteAtPos(&Head,1);
	DisplayR(Head);
	
	DeleteAtPos(&Head,3);
	DisplayR(Head);

	iRet = CountR(Head);
	printf("Number of nodes in linked list are : %d\n\n",iRet);
	
	return 0;
}
