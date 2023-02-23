#include<iostream>
using namespace std;

#pragma pack(1)
template <class T>
struct node
{
	T data;
	struct node *next;
};

template <class T>
class SinglyLL
{
	public:
		struct node<T> * First;
		int iCount;
		
		SinglyLL();
		
		void InsertFirst(T no);
		void InsertLast(T no);
		void InsertAtPosition(T no,int ipos);
		
		void DeleteFirst();
		void DeleteLast();
		void DeleteAtPosition(int ipos);
		
		void Display();
			
};

template <class T>
SinglyLL <T> :: SinglyLL()
{
	First = NULL;
	iCount =  0;
}

//struct is the optional keyword we can directly write node 

template <class T>
void SinglyLL <T> :: InsertFirst(T no)
{
	struct node<T> * newn = new struct node<T>;
	
	newn->data = no;
	newn->next = NULL;
	
	if(First == NULL)
	{
		First = newn;
		iCount++;
	}
	else
	{
		newn->next = First;
		First = newn;
		iCount++;
	}
}

template <class T>
void SinglyLL <T> :: InsertLast(T no)
{
	struct node<T> * newn = new struct node<T>;
	struct node<T> * temp = First;
	
	newn->data = no;
	newn->next = NULL;
	
	if(First == NULL)
	{
		First = newn;
	}
	else
	{
		while(temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newn;
		iCount++;
	}
}

template <class T>
void SinglyLL<T> :: InsertAtPosition(T no,int ipos)
{	
	if((ipos < 1) || (ipos > (iCount + 1)))
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
		struct node<T> * newn = new struct node<T>;
		struct node<T> * temp = First;
	
		newn->data = no;
		newn->next = NULL;
		
		for(int iCnt = 1;iCnt < ipos-1;iCnt++)
		{
			temp = temp->next;
		}
		newn->next = temp->next->next;
		temp->next = newn;
	}
}

template <class T>
void SinglyLL<T> :: DeleteFirst()
{	
	if(First == NULL)
	{
		return;
	}
	else
	{
		struct node<T> * temp = First;
		First = First->next;
		delete temp;
		iCount--;
	}
}

template <class T>
void SinglyLL<T> :: DeleteLast()
{
	if(First == NULL)
	{
		return;	
	}
	else
	{
		struct node<T> * temp = First;
		
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
void SinglyLL<T> :: DeleteAtPosition(int ipos)
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
		struct node<T> * temp1 = First;
		struct node<T> * temp2 = NULL;
		
		for(int iCnt = 1;iCnt < ipos-1;iCnt++)
		{
			temp1 = temp1->next;
		}
		temp2 = temp1->next;
		temp1->next = temp2->next;
		delete temp2;
		iCount--;
	}
}

template <class T>
void SinglyLL <T> :: Display()
{
	struct node<T> * temp = First;
	
	while(temp != NULL)
	{
		cout<<"| "<<temp->data<<" |->";
		temp = temp->next;
	}
	cout<<"NULL\n\n";
}

int main()
{
	cout<<"Integer object\n\n";
	SinglyLL <int>iobj;
	iobj.InsertFirst(101);
	iobj.InsertFirst(51);
	iobj.InsertFirst(21);
	iobj.InsertFirst(11);
	iobj.Display();
	cout<<"Number of nodes in linked list : "<<iobj.iCount<<"\n";
	iobj.InsertLast(110);
	iobj.InsertLast(115);
	iobj.Display();
	cout<<"Number of nodes in linked list : "<<iobj.iCount<<"\n";
	iobj.InsertAtPosition(201,3);
	iobj.InsertAtPosition(222,4);
	iobj.Display();
	cout<<"Number of nodes in linked list : "<<iobj.iCount<<"\n";
	iobj.DeleteFirst();
	iobj.Display();
	cout<<"Number of nodes in linked list : "<<iobj.iCount<<"\n";
	iobj.DeleteLast();
	iobj.Display();
	cout<<"Number of nodes in linked list : "<<iobj.iCount<<"\n";
	iobj.DeleteAtPosition(2);
	iobj.Display();
	cout<<"Number of nodes in linked list : "<<iobj.iCount<<"\n";
	cout<<"--------------------------------------------------\n\n";
	
	cout<<"Float object\n\n";
	SinglyLL <float>fobj;
	fobj.InsertFirst(20.5);
	fobj.InsertFirst(56.7);
	fobj.InsertFirst(21.8);
	fobj.InsertFirst(78.9);
	fobj.Display();
	cout<<"Number of nodes in linked list : "<<fobj.iCount<<"\n";
	fobj.InsertLast(45.2);
	fobj.InsertLast(87.3);
	fobj.Display();
	cout<<"Number of nodes in linked list : "<<fobj.iCount<<"\n";
	fobj.InsertAtPosition(34.2,3);
	fobj.InsertAtPosition(27.3,4);
	fobj.Display();
	cout<<"Number of nodes in linked list : "<<fobj.iCount<<"\n";
	fobj.DeleteFirst();
	fobj.Display();
	cout<<"Number of nodes in linked list : "<<fobj.iCount<<"\n";
	fobj.DeleteLast();
	fobj.Display();
	cout<<"Number of nodes in linked list : "<<fobj.iCount<<"\n";
	fobj.DeleteAtPosition(2);
	fobj.Display();
	cout<<"Number of nodes in linked list : "<<fobj.iCount<<"\n";
	cout<<"--------------------------------------------------\n\n";
	
	cout<<"Double object\n\n";
	SinglyLL <double>dobj;
	dobj.InsertFirst(57.134);
	dobj.InsertFirst(514.72);
	dobj.InsertFirst(212.23);
	dobj.InsertFirst(171.93);
	dobj.Display();
	cout<<"Number of nodes in linked list : "<<dobj.iCount<<"\n";
	dobj.InsertLast(450.5);
	dobj.InsertLast(345.71);
	dobj.Display();
	cout<<"Number of nodes in linked list : "<<dobj.iCount<<"\n";
	dobj.InsertAtPosition(245.33,3);
	dobj.InsertAtPosition(310.25,4);
	dobj.Display();
	cout<<"Number of nodes in linked list : "<<dobj.iCount<<"\n";
	dobj.DeleteFirst();
	dobj.Display();
	cout<<"Number of nodes in linked list : "<<dobj.iCount<<"\n";
	dobj.DeleteLast();
	dobj.Display();
	cout<<"Number of nodes in linked list : "<<dobj.iCount<<"\n";
	dobj.DeleteAtPosition(2);
	dobj.Display();
	cout<<"Number of nodes in linked list : "<<dobj.iCount<<"\n";
	cout<<"--------------------------------------------------\n\n";
	
	cout<<"Character object\n\n";
	SinglyLL <char>cobj;
	cobj.InsertFirst('d');
	cobj.InsertFirst('c');
	cobj.InsertFirst('b');
	cobj.InsertFirst('a');
	cobj.Display();
	cout<<"Number of nodes in linked list : "<<cobj.iCount<<"\n";
	cobj.InsertLast('e');
	cobj.InsertLast('f');
	cobj.Display();
	cout<<"Number of nodes in linked list : "<<cobj.iCount<<"\n";
	cobj.InsertAtPosition('i',3);
	cobj.InsertAtPosition('j',4);
	cobj.Display();
	cout<<"Number of nodes in linked list : "<<cobj.iCount<<"\n";
	cobj.DeleteFirst();
	cobj.Display();
	cout<<"Number of nodes in linked list : "<<cobj.iCount<<"\n";
	cobj.DeleteLast();
	cobj.Display();
	cout<<"Number of nodes in linked list : "<<cobj.iCount<<"\n";
	cobj.DeleteAtPosition(2);
	cobj.Display();
	cout<<"Number of nodes in linked list : "<<cobj.iCount<<"\n";
	cout<<"--------------------------------------------------\n\n";
	
	return 0;
}
