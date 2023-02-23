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

bool CheckPerfect(int iNo)
{
	int iCnt = 0;
	int iSum = 0;
	int iTemp = iNo;
	
	for(iCnt = 1;iCnt < iNo;iCnt++)
	{
		if((iNo % iCnt) == 0)
		{
			iSum = iSum + iCnt;	
		}	
	}
	return (iSum == iTemp);	
}

int DisplayPerfectNumber(PNODE First)
{
	while(First != NULL)
	{
		if(CheckPerfect(First->data) == true)
		{
			printf("%d is a perfect Number\n",First->data);
		}
		First = First->next;
	}
}



int main()
{
	PNODE Head = NULL;
	int iRet = 0;
	
	InsertLast(&Head,11);
	Display(Head);
	InsertLast(&Head,28);
	Display(Head);
	InsertLast(&Head,51);
	Display(Head);
	InsertLast(&Head,496);
	Display(Head);
	InsertLast(&Head,111);
	Display(Head);
	InsertLast(&Head,8128);
	Display(Head);

	DisplayPerfectNumber(Head);
	
	return 0;
}
