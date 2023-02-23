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

int Maximum(PNODE First)
{
	int iMax = 0;
	iMax = First->data;
	
	while(First != NULL)
	{
		if(First->data > iMax)
		{
			iMax = First->data;
		}
		First = First->next;
	}
	
	return iMax;
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

	iRet = Maximum(Head);
	printf("Largest number in linked list is : %d",iRet);
	
	return 0;
}
