#include<iostream>
using namespace std;

#pragma pack(1)
struct node
{
	int data;
	struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

class SinglyCircularLL
{
	public:
		PNODE First;
		PNODE Last;
		
		SinglyCircularLL();
		
		void InsertFirst(int no);
		void InsertLast(int no);
		void InsertAtPos(int no,int ipos);
		
		void DeleteFirst();
		void DeleteLast();
		void DeleteAtPos(int ipos);
		
		void Display();
		int Count();
};

SinglyCircularLL :: SinglyCircularLL()
{
	First = NULL;
	Last = NULL;	
}

void SinglyCircularLL :: InsertFirst(int no)
{
	PNODE newn = new NODE;
	
	newn->data = no;
	newn->next = NULL;
	
	if((First == NULL) && (Last == NULL))  // Empty Linked list
	{
		First = Last = newn;
		(Last)->next = First;
	}
	else // linked list contains atleast one node
	{
		newn->next = First;
		First = newn;
		(Last)->next = First;
	}
}

void SinglyCircularLL :: InsertLast(int no)
{
	PNODE newn = new NODE;
	
	newn->data = no;
	newn->next = NULL;
	
	if((First == NULL) && (Last == NULL))  // Empty Linked list
	{
		First = Last = newn;
		(Last)->next = First;
	}
	else // linked list contains atleast one node
	{
		(Last)->next = newn;
		Last = newn;
		(Last)->next = First; 
	}
}

void SinglyCircularLL :: DeleteFirst()
{
	if((First == NULL) && (Last == NULL))  // Empty LL
	{
		return;
	}
	else if(First == Last)   // Single node in LL
	{
		delete First;
		First = NULL;
		Last = NULL;
	}
	else              // if LL contains more than one node
	{
		First = (First)->next;
		delete (Last)->next;
		(Last)->next = First;
	}
}

void SinglyCircularLL :: DeleteLast()
{
	PNODE temp = First;
	
	if((First == NULL) && (Last == NULL))  // Empty LL
	{
		return;
	}
	else if(First == Last)   // Single node in LL
	{
		delete First;
		First = NULL;
		Last = NULL;
	}
	else
	{
		while(temp->next != Last)
		{
			temp = temp->next;
		}
		delete temp->next;   // free(*Last)
		Last = temp;
		(Last)->next = First;
	}
}

void SinglyCircularLL :: Display()
{
	PNODE temp = First;
	
	cout<<"Elements of linked list are : "<<"\n";
	
	do
	{
		cout<<"| "<<temp->data<<" |->";
		temp = temp -> next;
	}while(temp != Last->next);
	cout<<("\n");
}

int SinglyCircularLL :: Count()
{
	PNODE temp = First;
	int iCnt = 0;
	
	do
	{
		iCnt++;
		temp = temp -> next;
	}while(temp != Last->next);
	return iCnt;
}

void SinglyCircularLL :: InsertAtPos(int no,int ipos)
{
	PNODE newn = NULL;
	PNODE temp = NULL;
	
	int iCnt = 0;
	int iNodeCnt = 0;
	iNodeCnt = Count();
	
	if((ipos < 1) || (ipos > (iNodeCnt + 1)))
	{
		cout<<"Invalid Position"<<"\n";
		return;	
	}
	
	if(ipos == 1)
	{
		InsertFirst(no);	
	}
	else if(ipos == iNodeCnt+1)
	{
		InsertLast(no);	
	}
	else
	{	
		newn = new NODE;
		temp = First;
		newn->data = no;
		newn->next = NULL;
		
		for(iCnt = 1;iCnt < ipos - 1;iCnt++)
		{
			temp = temp->next;
		}
		newn->next = temp->next;
		temp->next = newn;
	}	
}

void SinglyCircularLL :: DeleteAtPos(int ipos)
{
	PNODE temp1 = First;
	PNODE temp2 = NULL;
	int iCnt = 0;
	int iNodeCnt = 0;
	iNodeCnt = Count();
	
	if((ipos < 1) || (ipos > iNodeCnt))
	{
		cout<<"Invalid Position"<<"\n";
		return;
	}
	
	if(ipos == 1)
	{
		DeleteFirst();
	}
	else if(ipos == iNodeCnt)
	{
		DeleteLast();
	}
	else
	{
		for(iCnt = 1;iCnt < ipos - 1;iCnt++)
		{
			temp1 = temp1->next;
		}
		temp2 = temp1->next;
		temp1->next = temp1->next->next;  // temp2->next;
		delete temp2;
	}
	
}

int main()
{
	SinglyCircularLL obj;
	int iRet = 0;
	
	obj.InsertFirst(51);
	obj.InsertFirst(21);
	obj.InsertFirst(11);
	
	obj.Display();
	iRet = obj.Count();
	cout<<"Number of elements are :  "<<iRet<<"\n\n";
	
	obj.InsertLast(101);
	obj.InsertLast(111);
	obj.InsertLast(121);
	
	obj.Display();
	iRet = obj.Count();
	cout<<"Number of elements are :  "<<iRet<<"\n\n";
	
	obj.InsertAtPos(201,4);

	obj.Display();
	iRet = obj.Count();	
	cout<<"Number of elements are :  "<<iRet<<"\n\n";
	
	obj.DeleteAtPos(4);

	obj.Display();
	iRet = obj.Count();	
	cout<<"Number of elements are :  "<<iRet<<"\n\n";

	obj.DeleteFirst();
	
	obj.Display();
	iRet = obj.Count();
	cout<<"Number of elements are :  "<<iRet<<"\n\n";
	
	obj.DeleteLast();
	
	obj.Display();
	iRet = obj.Count();
	cout<<"Number of elements are :  "<<iRet<<"\n\n";
	
	return 0;
}
