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
class DoublyCL
{
	public:
		
		struct node<T> *First;
		struct node<T> *Last;
		int iCount;
		
		DoublyCL();
		
		void InsertFirst(T no);
		void InsertLast(T no);
		void InsertAtPosition(T no,int ipos);
		
		void DeleteFirst();
		void DeleteLast();
		void DeleteAtPosition(int ipos);
		
		void Display();
};

template <class T>
DoublyCL<T> :: DoublyCL()
{
	First = NULL;
	Last = NULL;
	iCount = 0;
}

template <class T>
void DoublyCL<T> :: InsertFirst(T no)
{
	struct node<T> *newn = new struct node<T>;
	
	newn->data = no;
	newn->next = NULL;
	newn->prev = NULL;
	
	if((First == NULL) && (Last == NULL))
	{
		First = Last = newn;
		iCount++;
	}
	else
	{
		newn->next = First;
		First = newn;
		Last->next = First;
		First->prev = Last;
		Last->prev = First;
		iCount++;
	}
}

template <class T>
void DoublyCL<T> :: InsertLast(T no)
{
	struct node<T> *newn = new struct node<T>;
	
	newn->data = no;
	newn->next = NULL;
	newn->prev = NULL;
	
	if((First == NULL) && (Last == NULL))
	{
		First = Last = newn;
		iCount++;
	}
	else
	{
		Last->next = newn;
		newn->prev = Last;
		newn->next = First;
		Last = newn;
		First->prev = Last;
		iCount++;
	}
}

template <class T>
void DoublyCL<T> :: InsertAtPosition(T no,int ipos)
{
	if((ipos < 1) || (ipos > (iCount + 1)))
	{
		cout<<"Invalid Position\n";
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
		struct node<T> *newn = new struct node<T>;
		struct node<T> *temp = First;
		
		newn->data = no;
		newn->next = NULL;
		newn->prev = NULL;
		
		for(int iCnt = 1;iCnt < ipos - 1; iCnt++)
		{
			temp = temp->next;
		}
		
		newn->next = temp->next;
		temp->next = newn;
		newn->prev = temp;
		newn->next->prev = newn;
		iCount++;
	}
}

template <class T>
void DoublyCL<T> :: DeleteFirst()
{
	if((First == NULL) && (Last == NULL))
	{
		return;	
	}
	else
	{
		First = First->next;
		delete Last->next;
		First->prev = Last;
		Last->next = First;
		iCount--;	
	}	
}

template <class T>
void DoublyCL<T> :: DeleteLast()
{
	if((First == NULL) && (Last == NULL))
	{
		return;
	}
	else if((First->next == Last) && (Last->next == First))
	{
		delete First;
		First = NULL;
		Last = NULL;
		iCount--;
	}
	else
	{
		Last = Last->prev;
		delete First->prev;
		Last->next = First;
		First->prev = Last;
		iCount--;
	}
}

template <class T>
void DoublyCL<T> :: DeleteAtPosition(int ipos)
{
	if((ipos < 1) && (ipos > (iCount + 1)))
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
		
		for(int iCnt = 1;iCnt < ipos-1; iCnt++)
		{
			temp1 = temp1->next;
		}
		
		temp2 = temp1->next;
		temp1->next = temp2->next;
		temp2->next->prev = temp1;
		delete temp2;
		iCount--;
	}
}

template <class T>
void DoublyCL<T> :: Display()
{
	struct node<T> *temp = First;
	
	cout<<"<=>";
	do
	{
		cout<<"| "<<temp->data<<" |<=>";
		temp = temp->next;
	}while(temp != Last->next);
	cout<<"\n\n";
}

int main()
{
	cout<<"Integer Object\n\n";
	DoublyCL <int>iobj;
	iobj.InsertFirst(101);
	iobj.InsertFirst(51);
	iobj.InsertFirst(21);
	iobj.InsertFirst(11);
	iobj.Display();
	cout<<"Number of nodes in the linked list are  : "<<iobj.iCount<<"\n\n";
	iobj.InsertLast(151);
	iobj.InsertLast(200);
	iobj.Display();
	cout<<"Number of nodes in the linked list are : "<<iobj.iCount<<"\n\n";
	iobj.InsertAtPosition(345,3);
	iobj.Display();
	cout<<"Number of nodes in the linked list are : "<<iobj.iCount<<"\n\n";
	iobj.DeleteFirst();
	iobj.Display();
	cout<<"Number of nodes in the linked list are : "<<iobj.iCount<<"\n\n";
	iobj.DeleteLast();
	iobj.Display();
	cout<<"Number of nodes in the linked list are : "<<iobj.iCount<<"\n\n";
	iobj.DeleteAtPosition(2);
	iobj.Display();
	cout<<"Number of nodes in the linked list are : "<<iobj.iCount<<"\n\n";
	
	cout<<"----------------------------------------------------------------------------\n\n";
	
	cout<<"Float Object\n\n";
	DoublyCL <float>fobj;
	fobj.InsertFirst(76.7);
	fobj.InsertFirst(51.3);
	fobj.InsertFirst(24.5);
	fobj.InsertFirst(11.1);
	fobj.Display();
	cout<<"Number of nodes in the linked list are  : "<<fobj.iCount<<"\n\n";
	fobj.InsertLast(45.2);
	fobj.InsertLast(89.4);
	fobj.Display();
	cout<<"Number of nodes in the linked list are : "<<fobj.iCount<<"\n\n";
	fobj.InsertAtPosition(97.8,3);
	fobj.Display();
	cout<<"Number of nodes in the linked list are : "<<fobj.iCount<<"\n\n";
	fobj.DeleteFirst();
	fobj.Display();
	cout<<"Number of nodes in the linked list are : "<<fobj.iCount<<"\n\n";
	fobj.DeleteLast();
	fobj.Display();
	cout<<"Number of nodes in the linked list are : "<<fobj.iCount<<"\n\n";
	fobj.DeleteAtPosition(2);
	fobj.Display();
	cout<<"Number of nodes in the linked list are : "<<fobj.iCount<<"\n\n";
	cout<<"----------------------------------------------------------------------------\n\n";	
	
	cout<<"Double Object\n\n";
	DoublyCL <double>dobj;
	dobj.InsertFirst(345.12);
	dobj.InsertFirst(289.56);
	dobj.InsertFirst(234.32);
	dobj.InsertFirst(121.23);
	dobj.Display();
	cout<<"Number of nodes in the linked list are  : "<<dobj.iCount<<"\n\n";
	dobj.InsertLast(390.91);
	dobj.InsertLast(456.75);
	dobj.Display();
	cout<<"Number of nodes in the linked list are : "<<dobj.iCount<<"\n\n";
	dobj.InsertAtPosition(545.95,3);
	dobj.Display();
	cout<<"Number of nodes in the linked list are : "<<dobj.iCount<<"\n\n";
	dobj.DeleteFirst();
	dobj.Display();
	cout<<"Number of nodes in the linked list are : "<<dobj.iCount<<"\n\n";
	dobj.DeleteLast();
	dobj.Display();
	cout<<"Number of nodes in the linked list are : "<<dobj.iCount<<"\n\n";
	dobj.DeleteAtPosition(2);
	dobj.Display();
	cout<<"Number of nodes in the linked list are : "<<dobj.iCount<<"\n\n";
	cout<<"----------------------------------------------------------------------------\n\n";	
	
	cout<<"Character Object\n\n";
	DoublyCL <char>cobj;
	cobj.InsertFirst('d');
	cobj.InsertFirst('c');
	cobj.InsertFirst('b');
	cobj.InsertFirst('a');
	cobj.Display();
	cout<<"Number of nodes in the linked list are  : "<<cobj.iCount<<"\n\n";
	cobj.InsertLast('e');
	cobj.InsertLast('f');
	cobj.Display();
	cout<<"Number of nodes in the linked list are : "<<cobj.iCount<<"\n\n";
	cobj.InsertAtPosition('g',3);
	cobj.Display();
	cout<<"Number of nodes in the linked list are : "<<cobj.iCount<<"\n\n";
	cobj.DeleteFirst();
	cobj.Display();
	cout<<"Number of nodes in the linked list are : "<<cobj.iCount<<"\n\n";
	cobj.DeleteLast();
	cobj.Display();
	cout<<"Number of nodes in the linked list are : "<<cobj.iCount<<"\n\n";
	cobj.DeleteAtPosition(2);
	cobj.Display();
	cout<<"Number of nodes in the linked list are : "<<cobj.iCount<<"\n\n";
	cout<<"----------------------------------------------------------------------------\n\n";		
	return 0;
}
