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

int SearchFirstOccurance(PNODE First, int No)
{
    int Counter = 1;
    int iPos = -1;

    while(First != NULL)
    {
        if(First->data == No)
        {
            iPos = Counter;
            break;
        }
        First = First->next;
        Counter++;
    }

    return iPos;
}

int SearchLastOccurance(PNODE First, int No)
{
    int Counter = 1;
    int iPos = -1;

    while(First != NULL)
    {
        if(First->data == No)
        {
            iPos = Counter;
        }
        First = First->next;
        Counter++;
    }

    return iPos;
}

int Frequency(PNODE First, int No)
{
    int Counter = 0;
    int iPos = -1;

    while(First != NULL)
    {
        if(First->data == No)
        {
            Counter++;
        }
        First = First->next;
    }

    return Counter;
}

int MiddleElement(PNODE First)
{
	PNODE fastptr = First;
	PNODE slowptr = First;
	
	while((fastptr!= NULL) && (fastptr->next != NULL))  // Even and Odd conditions can work
	{
		fastptr = fastptr->next->next;
		slowptr = slowptr->next;
	}
	
	return (slowptr->data);
}

bool LoopCheck(PNODE First)
{
	PNODE fastptr = First;
	PNODE slowptr = First;
	int data = 0;
	bool flag = false;
	
	while((fastptr != NULL) && (fastptr->next != NULL))
	{
		slowptr = slowptr->next;
		fastptr = fastptr->next->next->next->next->next;
		
		if(slowptr == fastptr)
		{
			flag = true;
			printf("Data : %d\n",fastptr->data);
			break;
		}
	}
	return flag;
	
}
int main()
{
    PNODE Head = NULL;
    PNODE temp1, temp2;
    bool bRet = false;

    //InsertFirst(&Head, 151);// InsertFirst(60,51)
    InsertFirst(&Head, 121);// InsertFirst(60,51)
    InsertFirst(&Head, 111);// InsertFirst(60,51)
    InsertFirst(&Head, 101);// InsertFirst(60,51)
    InsertFirst(&Head, 51);// InsertFirst(60,51)
    InsertFirst(&Head, 21);// InsertFirst(60,21)
    InsertFirst(&Head, 11);// InsertFirst(60,11)
    //InsertFirst(&Head, 11);// InsertFirst(60,11)
    
    Display(Head);

	temp1 = Head;
	temp2 = Head;
	
	temp1 = temp1->next->next;
	temp2 = temp2->next->next->next->next->next;
	
	temp2->next = temp1;  // loop created
    
   // Display(Head);
    
    bRet = LoopCheck(Head);
    if(bRet == true)
    {
    	printf("The linked list contains cycle or loop\n");
	}
	else
	{
		printf("The linked list does not contains cycle or loop\n");
	}
    return 0;
}

