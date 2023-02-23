#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
struct node
{
	int data;
	struct node *next;
	struct node *prev;
};
typedef struct node NODE;
typedef struct node  * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE First,PPNODE Last,int no)
{
	PNODE newn = (PNODE)malloc(sizeof(NODE));
	
	newn->data = no;
	newn->next = NULL;
	newn->prev = NULL;
	
	if(*First == NULL && *Last == NULL)
	{
		*First= *Last = newn;
	}
	else
	{
		newn->next = *First;
		(*First)->prev = newn;
		*First = newn;
	}
	(*First)->prev = *Last;
	(*Last)->next = *First;
}

void InsertLast(PPNODE First,PPNODE Last,int no)
{
	PNODE newn = (PNODE)malloc(sizeof(NODE));
	PNODE temp = *First;
	
	newn->data = no;
	newn->prev = NULL;
	newn->next = NULL;
	
	if(*First == NULL && *Last == NULL)
	{
		*First = *Last = newn;
	}
	else
	{
		(*Last)->next = newn;
		newn->prev = *Last;
		*Last = newn;
	}
	(*Last)->next = *First;
	(*First)->prev = *Last;
}

void DeleteFirst(PPNODE First,PPNODE Last)
{
	if(*First == NULL && *Last == NULL)
	{
		return;	
	}
	else if(*First == *Last)
	{
		free(*First);
		*First = NULL;
		*Last = NULL;
	}
	else
	{
		*First = (*First)->next;
		free((*First)->prev);      // free((*Last)->next)
		(*Last)->next = *First;
		(*First)->prev = *Last;	
	}	
}

void DeleteLast(PPNODE First,PPNODE Last)
{
	if((*First == NULL) && (*Last == NULL))
	{
		return;	
	}
	else if(*First == *Last)
	{
		free(*First);
		*First = NULL;
		*Last = NULL;
	}
	else
	{
		*Last = (*Last)->prev;
		free((*First)->prev);
		(*Last)->next = *First;
		(*First)->prev = *Last;	
	}
}

void Display(PNODE First,PNODE Last)
{
	if(First == NULL && Last == NULL)
	{
		printf("Linked list is empty");
		return;
	}
	
	printf("Elements of the linked list\n");
	printf("<=>");
	do
	{
		printf("| %d |<=>",First->data);
		First = First->next;	
	}while(First != Last->next);
	printf("\n");
}

int Count(PNODE First,PNODE Last)
{
	int iCnt = 0;
	
	if(First == NULL && Last == NULL)
	{
		printf("Linked list is empty");
		return iCnt;
	}
	
	do
	{
		iCnt++;
		First = First->next;	
	}while(First != Last->next);
	
	return iCnt;	
}

void InsertAtPos(PPNODE First,PPNODE Last,int no,int ipos)
{
	int iCnt = 0;
	int iNodeCnt = 0;
	PNODE newn = (PNODE)malloc(sizeof(NODE));
	PNODE temp = NULL;
	
	newn->data = no;
	newn->prev = NULL;
	newn->next = NULL;
	
	iNodeCnt = Count(*First,*Last);
	
	if((ipos < 1) || (ipos > (iNodeCnt + 1)))
	{
		printf("Invalid Position\n");
		return;
	}
	
	if(ipos == 1)
	{
		InsertFirst(First,Last,no);
	}
	else if(ipos == iNodeCnt + 1)
	{
		InsertLast(First,Last,no);
	}
	else
	{
		temp = *First;
		
		for(iCnt = 1;iCnt < ipos -1; iCnt++)
		{
			temp = temp->next;
		}
		newn->next = temp->next;   // left
		temp->next->prev = newn;
		
		temp->next = newn;         // right
		temp->next->prev = temp;
	}
}

void DeleteAtPos(PPNODE First,PPNODE Last,int ipos)
{
	int iCnt = 0;
	int iNodeCnt = 0;
	iNodeCnt = Count(*First,*Last);
	PNODE temp = NULL;
	
	if((ipos < 1) || (ipos > (iNodeCnt)))
	{
		printf("Invalid Position\n");
		return;
	}
	
	if(ipos == 1)
	{
		DeleteFirst(First,Last);
	}
	else if(ipos == iNodeCnt)
	{
		DeleteLast(First,Last);
	}
	else
	{
		temp = *First;
		for(iCnt = 1;iCnt < ipos -1;iCnt++)
		{
			temp = temp->next;
		}
		temp->next = temp->next->next;
		free(temp->next->prev);
		temp->next->prev = temp;
	}	
}

int main()
{
	PNODE Head = NULL;
	PNODE Tail = NULL;
	int iRet = 0;
	
	InsertFirst(&Head,&Tail,51);
	InsertFirst(&Head,&Tail,21);
	InsertFirst(&Head,&Tail,11);
	
	Display(Head,Tail);
	iRet = Count(Head,Tail);
	printf("Number of nodes in linked list are : %d\n\n",iRet);

	InsertLast(&Head,&Tail,101);
	InsertLast(&Head,&Tail,111);
	InsertLast(&Head,&Tail,121);
	
	Display(Head,Tail);
	iRet = Count(Head,Tail);
	printf("Number of nodes in linked list are : %d\n\n",iRet);

	InsertAtPos(&Head,&Tail,201,3);

	Display(Head,Tail);
	iRet = Count(Head,Tail);
	printf("Number of nodes in linked list are : %d\n\n",iRet);
	
	DeleteAtPos(&Head,&Tail,3);

	Display(Head,Tail);
	iRet = Count(Head,Tail);
	printf("Number of nodes in linked list are : %d\n\n",iRet);
	
	DeleteFirst(&Head,&Tail);
	
	Display(Head,Tail);
	iRet = Count(Head,Tail);
	printf("Number of nodes in linked list are : %d\n\n",iRet);
	
	DeleteLast(&Head,&Tail);
	
	Display(Head,Tail);
	iRet = Count(Head,Tail);
	printf("Number of nodes in linked list are : %d\n\n",iRet);
	return 0;
}
