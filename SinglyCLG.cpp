#include<iostream>
using namespace std;

#pragma pack(1)
template <class T>
struct node
{
	T data;
	struct node * next;
};

template <class T>
class SinglyCL
{
	public:
		struct node<T> * First;
		struct node<T> * Last;

		int iCount;
		
		SinglyCL();
		
		void InsertFirst(T no);
		void InsertLast(T no);
		void InsertAtPosition(T no,int ipos);
		
		void DeleteFirst();
		void DeleteLast();
		void DeleteAtPosition(int ipos);
		
		void Display();
};

template <class T>
SinglyCL<T> :: SinglyCL()
{
	First = NULL;
	Last = NULL;
	iCount = 0;
}

template <class T>
void SinglyCL<T> :: InsertFirst(T no)
{
	struct node<T> * newn = new struct node<T>;
	
	newn->data = no;
	newn->next = NULL;
	
	if(First == NULL && Last == NULL)
	{
		First = Last = newn;
		Last->next = First;
		iCount++;
	}
	else
	{
		newn->next = First;
		First = newn;
		Last->next = First;
		iCount++;
	}
}

template <class T>
void SinglyCL<T> :: InsertLast(T no)
{
	struct node<T> * newn = new struct node<T>;	
	
	newn->data = no;
	newn->next = NULL;
	
	if(First == NULL && Last == NULL)
	{
		First = Last = newn;
		Last->next = First;
		iCount++;	
	}
	else
	{	
		Last->next = newn;
		Last = newn;
		Last->next = First;
		iCount++;
	}
}

template <class T>
void SinglyCL<T> :: InsertAtPosition(T no,int ipos)
{
	if((ipos < 1) && (ipos > (iCount + 1)))
	{
		cout<<"Invalid Position/n";
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
		struct node<T> * newn = new struct node<T>;
		struct node<T> * temp = First;
		
		newn->data = no;
		newn->next = NULL;
		
		for(int iCnt = 1;iCnt < ipos-1;iCnt++)
		{
			temp = temp->next;
		}
		
		newn->next = temp->next;
		temp->next = newn;
		iCount++;
	}
}

template <class T>
void SinglyCL<T> :: DeleteFirst()
{
	if(First == NULL && Last == NULL)
	{
		return;
	}
	else
	{
		First = First->next;
		delete Last->next;
		Last->next = First;
		iCount--;
	}
}

template <class T>
void SinglyCL<T> :: DeleteLast()
{
	if(First == NULL && Last == NULL)
	{
		return;
	}
	else if(First == Last)
	{
		delete First;
		First = NULL;
		Last = NULL;
	}
	else
	{
		struct node<T> * temp = First;
		
		while(temp->next != Last)
		{
			temp =temp->next;
		}
		Last = temp;
		delete Last->next;
		Last->next = First;
		iCount--;
	}
}

template <class T>
void SinglyCL<T> :: DeleteAtPosition(int ipos)
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
void SinglyCL<T> :: Display()
{
	struct node<T> * temp = First;
	
	cout<<"->";
	do
	{
		cout<<"| "<<temp->data<<" |->";
		temp = temp->next;
	}while(temp != Last->next);
	cout<<"\n\n";
}

int main()
{
	cout<<"Integer object\n\n";
	SinglyCL <int>iobj;
	iobj.InsertFirst(101);
	iobj.InsertFirst(51);
	iobj.InsertFirst(21);
	iobj.InsertFirst(11);
	iobj.Display();
	cout<<"Number of nodes in the linked list : "<<iobj.iCount<<"\n";
	iobj.InsertLast(175);
	iobj.InsertLast(202);
	iobj.Display();
	cout<<"Number of nodes in the linked list : "<<iobj.iCount<<"\n";
	iobj.InsertAtPosition(350,3);
	iobj.Display();
	cout<<"Number of nodes in the linked list : "<<iobj.iCount<<"\n";
	iobj.DeleteFirst();
	iobj.Display();
	cout<<"Number of nodes in the linked list : "<<iobj.iCount<<"\n";
	iobj.DeleteLast();
	iobj.Display();
	cout<<"Number of nodes in the linked list : "<<iobj.iCount<<"\n";
	iobj.DeleteAtPosition(2);
	iobj.Display();
	cout<<"Number of nodes in the linked list : "<<iobj.iCount<<"\n";
	cout<<"------------------------------------------------------\n";
	
	cout<<"float object\n\n";
	SinglyCL <float>fobj;
	fobj.InsertFirst(78.9);
	fobj.InsertFirst(51.3);
	fobj.InsertFirst(25.4);
	fobj.InsertFirst(15.7);
	fobj.Display();
	cout<<"Number of nodes in the linked list : "<<fobj.iCount<<"\n";
	fobj.InsertLast(37.1);
	fobj.InsertLast(65.2);
	fobj.Display();
	cout<<"Number of nodes in the linked list : "<<fobj.iCount<<"\n";
	fobj.InsertAtPosition(97.5,3);
	fobj.Display();
	cout<<"Number of nodes in the linked list : "<<fobj.iCount<<"\n";
	fobj.DeleteFirst();
	fobj.Display();
	cout<<"Number of nodes in the linked list : "<<fobj.iCount<<"\n";
	fobj.DeleteLast();
	fobj.Display();
	cout<<"Number of nodes in the linked list : "<<fobj.iCount<<"\n";
	fobj.DeleteAtPosition(2);
	fobj.Display();
	cout<<"Number of nodes in the linked list : "<<fobj.iCount<<"\n";
	cout<<"------------------------------------------------------\n";
	
	cout<<"Double object\n\n";
	SinglyCL <double>dobj;
	dobj.InsertFirst(305.89);
	dobj.InsertFirst(235.71);
	dobj.InsertFirst(150.74);
	dobj.InsertFirst(101.51);
	dobj.Display();
	cout<<"Number of nodes in the linked list : "<<dobj.iCount<<"\n";
	dobj.InsertLast(345.43);
	dobj.InsertLast(450.69);
	dobj.Display();
	cout<<"Number of nodes in the linked list : "<<dobj.iCount<<"\n";
	dobj.InsertAtPosition(547.45,3);
	dobj.Display();
	cout<<"Number of nodes in the linked list : "<<dobj.iCount<<"\n";
	dobj.DeleteFirst();
	dobj.Display();
	cout<<"Number of nodes in the linked list : "<<dobj.iCount<<"\n";
	dobj.DeleteLast();
	dobj.Display();
	cout<<"Number of nodes in the linked list : "<<dobj.iCount<<"\n";
	dobj.DeleteAtPosition(2);
	dobj.Display();
	cout<<"Number of nodes in the linked list : "<<dobj.iCount<<"\n";
	cout<<"------------------------------------------------------\n";
	
	cout<<"Character object\n\n";
	SinglyCL <char>cobj;
	cobj.InsertFirst('d');
	cobj.InsertFirst('c');
	cobj.InsertFirst('b');
	cobj.InsertFirst('a');
	cobj.Display();
	cout<<"Number of nodes in the linked list : "<<cobj.iCount<<"\n";
	cobj.InsertLast('e');
	cobj.InsertLast('f');
	cobj.Display();
	cout<<"Number of nodes in the linked list : "<<cobj.iCount<<"\n";
	cobj.InsertAtPosition('z',3);
	cobj.Display();
	cout<<"Number of nodes in the linked list : "<<cobj.iCount<<"\n";
	cobj.DeleteFirst();
	cobj.Display();
	cout<<"Number of nodes in the linked list : "<<cobj.iCount<<"\n";
	cobj.DeleteLast();
	cobj.Display();
	cout<<"Number of nodes in the linked list : "<<cobj.iCount<<"\n";
	cobj.DeleteAtPosition(2);
	cobj.Display();
	cout<<"Number of nodes in the linked list : "<<cobj.iCount<<"\n";
	cout<<"------------------------------------------------------\n";

	return 0;
}
