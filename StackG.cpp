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
class Stack
{
	public:
		struct node<T> *First;

		int iCount;

		Stack();

		void Push(T no);

		void Pop();

		void Display();
};

template <class T>
Stack <T> :: Stack()
{
	First = NULL;
	iCount =  0;
}

template <class T>
void Stack <T> :: Push(T no)
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
void Stack<T> :: Pop()
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
void Stack <T> :: Display()
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
	Stack <int>iobj;
	iobj.Push(101);
	iobj.Push(51);
	iobj.Push(21);
	iobj.Push(11);
	iobj.Display();
	cout<<"Number of nodes in linked list : "<<iobj.iCount<<"\n";
	iobj.Pop();
	iobj.Display();
	cout<<"Number of nodes in linked list : "<<iobj.iCount<<"\n";
	cout<<"--------------------------------------------------\n\n";
	
	cout<<"Float object\n\n";
	Stack <float>fobj;
	fobj.Push(20.5);
	fobj.Push(56.7);
	fobj.Push(21.8);
	fobj.Push(78.9);
	fobj.Display();
	cout<<"Number of nodes in linked list : "<<fobj.iCount<<"\n";
	fobj.Pop();
	fobj.Display();
	cout<<"Number of nodes in linked list : "<<fobj.iCount<<"\n";
	cout<<"--------------------------------------------------\n\n";
	
	cout<<"Double object\n\n";
	Stack <double>dobj;
	dobj.Push(57.134);
	dobj.Push(514.72);
	dobj.Push(212.23);
	dobj.Push(171.93);
	dobj.Display();
	cout<<"Number of nodes in linked list : "<<dobj.iCount<<"\n";
	dobj.Pop();
	dobj.Display();
	cout<<"Number of nodes in linked list : "<<dobj.iCount<<"\n";
	cout<<"--------------------------------------------------\n\n";
	
	cout<<"Character object\n\n";
	Stack <char>cobj;
	cobj.Push('d');
	cobj.Push('c');
	cobj.Push('b');
	cobj.Push('a');
	cobj.Display();
	cout<<"Number of nodes in linked list : "<<cobj.iCount<<"\n";
	cobj.Pop();
	cobj.Display();
	cout<<"Number of nodes in linked list : "<<cobj.iCount<<"\n";
	cout<<"--------------------------------------------------\n\n";
	
	return 0;
}

