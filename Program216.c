// Full fledged linked list of Singly Linear (switch case)

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

void InsertAtPos(PPNODE First,int No,int iPos)
{
	int NodeCnt = 0;
	int iCnt = 0;
	
	PNODE temp = NULL;
	PNODE newn = NULL;
	
	NodeCnt = Count(*First); 
	
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
	NodeCnt = Count(*First);
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
	int iRet = 0,iChoice = 0,iPos = 0,iNo = 0;
	char cTer = '\0';

	printf("Welcome to the data structure application written by Anmol Patil");
	
	
	while(1)
	{
		printf("-------------------------------------------------------------------\n");
		
		printf("Please choose the operation to perform\n\n");
		printf("1 : Insert new node at first position\n");
		printf("2 : Insert new node at last position\n");
		printf("3 : Insert node at given position\n");
		printf("4 : Delete node from first position\n");
		printf("5 : Delete node from last position\n"); 
		printf("6 : Delete node from given position\n");
		printf("7 : Display node from given position\n");
		printf("8 : Count number of nodes from linked list\n");
		
		scanf("%d",&iChoice);
		switch(iChoice)
		{
			case 1: 
				printf("Enter the data that you want to insert : \n");
				scanf("%d",&iNo);
				
				InsertFirst(&Head,iNo);
				break;
				
			case 2: 
				printf("Enter the data that you want to insert : \n");
				scanf("%d",&iNo);
				
				InsertLast(&Head,iNo);
				break;
				
			case 3: 
				printf("Enter the data that you want to insert : \n");
				scanf("%d",&iNo);
				
				printf("Enter the position : \n");
				scanf("%d",&iPos);
				
				InsertAtPos(&Head,iNo,iPos);
				break;
				
			case 4: 
				DeleteFirst(&Head);
				break;
			
			case 5: 
				DeleteLast(&Head);
				break;
			
			case 6:
				printf("Enter the position : \n"); 
				scanf("%d",&iPos);
				
				DeleteAtPos(&Head,iPos);
				break;
			
			case 7: 
				Display(Head);
				break;
			
			case 8: 
				iRet = Count(Head);
				printf("Number of nodes in linked list are : %d\n\n",iRet);
				break;
			
			case 9:
				printf("Thank you for using the application\n");
				printf("Are you sure you want to terminate the application\n");
				scanf("%c",&cTer);
				if((cTer == 'Y') || (cTer == 'y'))
				{
					return 0;
				}
//				else if((cTer == 'N') || (cTer == 'n'))
//				{
//					while(1);
//				}
				
			default: 
				printf("Invalid Option\n");
				break;
		}
		
		printf("-------------------------------------------------------------------\n");
	}
	
	return 0;
}
