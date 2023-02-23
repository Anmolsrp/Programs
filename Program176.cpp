#include<iostream>
using namespace std;

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

class DoublyCircular
{
	public:
		PNODE First;
		PNODE Last;
		int iCount;
		
		DoublyCircular();
		
		void InsertFirst(int no);
		void InsertLast(int no);
		void InsertAtPosition(int no,int ipos);
		
		void DeleteFirst();
		void DeleteLast();
		void DeleteAtPosition(int ipos);
	
		void Display();
};

DoublyCircular :: DoublyCircular()
{
	First = NULL;
	Last = NULL;
	iCount = 0;	
}

void DoublyCircular :: InsertFirst(int no)
{
	PNODE newn = new node;
	
	newn->data = no;
	newn->next = NULL;
	newn->prev = NULL;
	
	if(First == NULL && Last == NULL)
	{
		First= Last = newn;
	}
	else
	{
		newn->next = First;
		(First)->prev = newn;
		First = newn;
		iCount++;
	}
	(First)->prev = Last;
	(Last)->next = First;
}

void DoublyCircular :: InsertLast(int no)
{
	PNODE newn = new NODE;
	PNODE temp = First;
	
	newn->data = no;
	newn->prev = NULL;
	newn->next = NULL;
	
	if(First == NULL && Last == NULL)
	{
		First = Last = newn;
	}
	else
	{
		(Last)->next = newn;
		newn->prev = Last;
		Last = newn;
		iCount++;
	}
	(Last)->next = First;
	(First)->prev = Last;
}

void DoublyCircular :: DeleteFirst()
{
	if(First == NULL && Last == NULL)
	{
		return;	
	}
	else if(First == Last)
	{
		 delete (First);
		First = NULL;
		Last = NULL;
		iCount--;
	}
	else
	{
		First = (First)->next;
		delete ((First)->prev);      // free((*Last)->next)
		(Last)->next = First;
		(First)->prev = Last;
		iCount--;	
	}	
}

void DoublyCircular :: DeleteLast()
{
	if((First == NULL) && (Last == NULL))
	{
		return;	
	}
	else if(First == Last)
	{
		delete (First);
		First = NULL;
		Last = NULL;
		iCount--;
	}
	else
	{
		Last = (Last)->prev;
		delete ((First)->prev);
		(Last)->next = First;
		(First)->prev = Last;
		iCount--;	
	}
}

void DoublyCircular :: Display()
{
	PNODE temp = First;
	if(First == NULL && Last == NULL)
	{
		cout<<"Linked list is empty";
		return;
	}
	
	cout<<"Elements of the linked list"<<"\n";
	cout<<"<=>";
	do
	{
		cout<<"| "<<temp->data<<" |<=>";
		temp = temp->next;	
	}while(temp != Last->next);
	cout<<"\n";
}

void DoublyCircular :: InsertAtPosition(int no,int ipos)
{	
	if((ipos < 1) || (ipos > (iCount + 1)))
	{
		printf("Invalid Position\n");
		return;
	}
	
	if(ipos == 1)
	{
		InsertFirst(no);
	}
	else if(ipos == iCount + 1)
	{
		InsertLast(no);
	}
	else
	{
		PNODE newn = new NODE;
	
		newn->data = no;
		newn->prev = NULL;
		newn->next = NULL;
		PNODE temp = First;
		
		for(int iCnt = 1;iCnt < ipos -1; iCnt++)
		{
			temp = temp->next;
		}
		newn->next = temp->next;   // left
		temp->next->prev = newn;
		
		temp->next = newn;         // right
		temp->next->prev = temp;
		iCount++;
	}
}

void DoublyCircular :: DeleteAtPosition(int ipos)
{	
	if((ipos < 1) || (ipos > (iCount)))
	{
		printf("Invalid Position\n");
		return;
	}
	
	if(ipos == 1)
	{
		DeleteFirst();
	}
	else if(ipos == iCount)
	{
		DeleteLast();
	}
	else
	{
		PNODE temp = First;
		for(int iCnt = 1;iCnt < ipos -1;iCnt++)
		{
			temp = temp->next;
		}
		temp->next = temp->next->next;
		delete (temp->next->prev);
		temp->next->prev = temp;
		iCount--;
	}	
}

int main()
{	
	DoublyCircular obj;
	
	obj.InsertFirst(51);
	obj.InsertFirst(21);
	obj.InsertFirst(11);
	
	obj.Display();
	cout<<"Number of nodes in linked list are : "<<obj.iCount<<"\n\n";

	obj.InsertLast(101);
	obj.InsertLast(111);
	obj.InsertLast(121);
	
	obj.Display();
	cout<<"Number of nodes in linked list are : "<<obj.iCount<<"\n\n";

	obj.InsertAtPosition(201,3);

	obj.Display();
	cout<<"Number of nodes in linked list are : "<<obj.iCount<<"\n\n";
	
	obj.DeleteAtPosition(3);

	obj.Display();
	cout<<"Number of nodes in linked list are : "<<obj.iCount<<"\n\n";
	
	obj.DeleteFirst();
		
	obj.Display();
	cout<<"Number of nodes in linked list are : "<<obj.iCount<<"\n\n";
	
	obj.DeleteLast();
	
	obj.Display();
	cout<<"Number of nodes in linked list are : "<<obj.iCount<<"\n\n";
	
	return 0;
}
