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


void Display(PNODE First)
{
	printf("Elements from the linked list\n");
	
	while(First != NULL)
	{
		printf("| %d |->",First->data);
		First = First->next;
	}
	printf("NULL\n\n");
}

int Minimum(PNODE First)
{
	int iMin = 0;
	
	if(First == NULL)
	{
		printf("Linked list is empty\n");
		return 0;
	}
	
	iMin = First->data;
	
	while(First != NULL)
	{
		if(First->data < iMin)
		{
			iMin = First->data;
		}
		First = First->next;
	}
	
	return iMin;
}

int main()
{
	PNODE Head = NULL;
	int iRet = 0;
	
	InsertLast(&Head,11);
	Display(Head);
	InsertLast(&Head,21);
	Display(Head);
	InsertLast(&Head,51);
	Display(Head);
	InsertLast(&Head,101);
	Display(Head);
	InsertLast(&Head,111);
	Display(Head);
	InsertLast(&Head,121);
	Display(Head);

	iRet = Minimum(Head);
	printf("Smallest number in linked list is : %d",iRet);
	
	return 0;
}
