#include<iostream>
using namespace std;

#pragma pack(1)
template <class T>
struct node
{
	T data;
	struct node *next;
	struct node *prev;
};

template <class T>
class DoublyLL
{
	public:
		struct node<T> *First;
		int iCount;
	
		DoublyLL();	
		void InsertFirst(T no);
		void InsertLast(T no);
		void InsertAtPosition(T no,int ipos);
	
		void DeleteFirst();
		void DeleteLast();
		void DeleteAtPosition(int ipos);
	
		void Display();
};

template <class T>
DoublyLL<T> :: DoublyLL()
{
	First = NULL;
	iCount = 0;
}

template <class T>
void DoublyLL<T> :: InsertFirst(T no)
{
	struct node<T>* newn = new struct node<T>;
	
	newn->data = no;
	newn->next = NULL;
	newn->prev = NULL;
	
	if(First == NULL)
	{
		First = newn;
		iCount++;
	}
	else
	{
		newn->next = First;
		First = newn;
		First->next->prev = First;
		iCount++;
	}
}

template <class T>
void DoublyLL<T> :: InsertLast(T no)
{
	struct node<T> * newn = new struct node<T>;
	
	newn->data = no;
	newn->next = NULL;
	newn->prev = NULL;
	
	if(First == NULL)
	{
		First = newn;
		iCount++;
	}
	else
	{
		struct node<T> *temp = First;
		
		while(temp->next != NULL)
		{
			temp = temp->next;
		}
		
		temp->next = newn;
		newn->prev = temp;
		iCount++;
	}
}

template <class T>
void DoublyLL<T> :: InsertAtPosition(T no,int ipos)
{
	
	if((ipos < 1) || (ipos > (iCount+1)))
	{
		cout<<"Invalid position\n";
		return;
	}
	
	if(ipos == 1)
	{
		InsertFirst(no);
	}
	else if(ipos == iCount+1)
	{
		InsertLast(no);
	}
	else
	{
		struct node<T> *newn = new struct node<T>;
		struct node<T> *temp = First;
	
		newn->data = no;
		newn->next = NULL;
		newn->prev = NULL;
		
		for(int iCnt = 1;iCnt < ipos -1; iCnt++)
		{
			temp = temp->next;
		}
		
		newn->next = temp->next;
		temp->next->prev = newn;
		newn->prev = temp;
		temp->next = newn;
		iCount++;
	}
}

template <class T>
void DoublyLL<T> :: DeleteFirst()
{
	if(First == NULL)
	{
		return;
	}
	else
	{
		First = First->next;
		delete First->prev;
		First->prev = NULL;
		iCount--;
	}
}

template <class T>
void DoublyLL<T> :: DeleteLast()
{
	if(First == NULL)
	{
		return;
	}
	else if(First->next == NULL)
	{
		delete First;
		First = NULL;
	}
	else
	{
		struct node<T> *temp = First;
		
		while(temp->next->next != NULL)
		{
			temp = temp->next;
		}
		
		delete temp->next;
		temp->next = NULL;
		iCount--;
	}
}

template <class T>
void DoublyLL<T> :: DeleteAtPosition(int ipos)
{
	if((ipos < 1) || (ipos > (iCount + 1)))
	{
		cout<<"Invalid Position\n";
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
		struct node<T> *temp1 = First;
		struct node<T> *temp2 = NULL;
		
		for(int iCnt = 1;iCnt < ipos - 1; iCnt++)
		{
			temp1 = temp1->next;
		}
		
		temp2 = temp1->next;
		temp2->next->prev = temp1;
		temp1->next = temp2->next;
		delete temp2;
		iCount--;
	}
}

template <class T>
void DoublyLL<T> :: Display()
{
	struct node<T> * temp = First;
	
	cout<<"NULL<=>";
	while(temp != NULL)
	{
		cout<<"| "<<temp->data<<" |<=>";
		temp = temp->next;
	}
	cout<<"NULL\n\n";
}

int main()
{
	cout<<"Integer object\n\n";
	DoublyLL <int>iobj;
	iobj.InsertFirst(101);
	iobj.InsertFirst(51);
	iobj.InsertFirst(21);
	iobj.InsertFirst(11);
	iobj.Display();
	cout<<"Number of nodes in linked list are : "<<iobj.iCount<<"\n\n";
	iobj.InsertLast(151);
	iobj.InsertLast(200);
	iobj.Display();
	cout<<"Number of nodes in linked list are : "<<iobj.iCount<<"\n\n";
	iobj.InsertAtPosition(345,3);
	iobj.Display();
	cout<<"Number of nodes in linked list are : "<<iobj.iCount<<"\n\n";
	iobj.DeleteFirst();
	iobj.Display();
	cout<<"Number of nodes in linked list are : "<<iobj.iCount<<"\n\n";
	iobj.DeleteLast();
	iobj.Display();
	cout<<"Number of nodes in linked list are : "<<iobj.iCount<<"\n\n";
	iobj.DeleteAtPosition(2);
	iobj.Display();
	cout<<"Number of nodes in linked list are : "<<iobj.iCount<<"\n\n";
	cout<<"--------------------------------------------------------------------------\n\n";
	
	cout<<"Float object\n\n";
	DoublyLL <float>fobj;
	fobj.InsertFirst(78.9);
	fobj.InsertFirst(57.4);
	fobj.InsertFirst(25.3);
	fobj.InsertFirst(11.1);
	fobj.Display();
	cout<<"Number of nodes in linked list are : "<<fobj.iCount<<"\n\n";
	fobj.InsertLast(43.2);
	fobj.InsertLast(87.5);
	fobj.Display();
	cout<<"Number of nodes in linked list are : "<<fobj.iCount<<"\n\n";
	fobj.InsertAtPosition(98.2,3);
	fobj.Display();
	cout<<"Number of nodes in linked list are : "<<fobj.iCount<<"\n\n";
	fobj.DeleteFirst();
	fobj.Display();
	cout<<"Number of nodes in linked list are : "<<iobj.iCount<<"\n\n";
	fobj.DeleteLast();
	fobj.Display();
	cout<<"Number of nodes in linked list are : "<<fobj.iCount<<"\n\n";
	fobj.DeleteAtPosition(2);
	fobj.Display();
	cout<<"Number of nodes in linked list are : "<<fobj.iCount<<"\n\n";
	cout<<"--------------------------------------------------------------------------\n\n";
	
	cout<<"Double object\n\n";
	DoublyLL <double>dobj;
	dobj.InsertFirst(278.12);
	dobj.InsertFirst(213.67);
	dobj.InsertFirst(175.23);
	dobj.InsertFirst(121.45);
	dobj.Display();
	cout<<"Number of nodes in linked list are : "<<dobj.iCount<<"\n\n";
	dobj.InsertLast(321.89);
	dobj.InsertLast(432.41);
	dobj.Display();
	cout<<"Number of nodes in linked list are : "<<dobj.iCount<<"\n\n";
	dobj.InsertAtPosition(581.33,3);
	dobj.Display();
	cout<<"Number of nodes in linked list are : "<<dobj.iCount<<"\n\n";
	dobj.DeleteFirst();
	dobj.Display();
	cout<<"Number of nodes in linked list are : "<<dobj.iCount<<"\n\n";
	dobj.DeleteLast();
	dobj.Display();
	cout<<"Number of nodes in linked list are : "<<dobj.iCount<<"\n\n";
	dobj.DeleteAtPosition(2);
	dobj.Display();
	cout<<"Number of nodes in linked list are : "<<dobj.iCount<<"\n\n";
	cout<<"--------------------------------------------------------------------------\n\n";
	
	cout<<"Character object\n\n";
	DoublyLL <char>cobj;
	cobj.InsertFirst('d');
	cobj.InsertFirst('c');
	cobj.InsertFirst('b');
	cobj.InsertFirst('a');
	cobj.Display();
	cout<<"Number of nodes in linked list are : "<<cobj.iCount<<"\n\n";
	cobj.InsertLast('e');
	cobj.InsertLast('f');
	cobj.Display();
	cout<<"Number of nodes in linked list are : "<<cobj.iCount<<"\n\n";
	cobj.InsertAtPosition('g',3);
	cobj.Display();
	cout<<"Number of nodes in linked list are : "<<cobj.iCount<<"\n\n";
	cobj.DeleteFirst();
	cobj.Display();
	cout<<"Number of nodes in linked list are : "<<cobj.iCount<<"\n\n";
	cobj.DeleteLast();
	cobj.Display();
	cout<<"Number of nodes in linked list are : "<<cobj.iCount<<"\n\n";
	cobj.DeleteAtPosition(2);
	cobj.Display();
	cout<<"Number of nodes in linked list are : "<<cobj.iCount<<"\n\n";
	cout<<"--------------------------------------------------------------------------\n\n";
	return 0;
}
