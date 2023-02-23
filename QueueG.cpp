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
class Queue
{
	public:
		struct node<T> *First;

		int iCount;

		Queue();

		void Enqueue(T no);

		void Dequeue();

		void Display();
};

template <class T>
Queue <T> :: Queue()
{
	First = NULL;
	iCount =  0;
}

template <class T>
void Queue <T> :: Enqueue(T no)
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
void Queue<T> :: Dequeue()
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
void Queue <T> :: Display()
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
	Queue <int>iobj;
	iobj.Enqueue(110);
	iobj.Enqueue(115);
	iobj.Display();
	cout<<"Number of nodes in linked list : "<<iobj.iCount<<"\n";
	iobj.Dequeue();
	iobj.Display();
	cout<<"Number of nodes in linked list : "<<iobj.iCount<<"\n";
	cout<<"--------------------------------------------------\n\n";
	
	cout<<"Float object\n\n";
	Queue <float>fobj;
	fobj.Enqueue(45.2);
	fobj.Enqueue(87.3);
	fobj.Display();
	cout<<"Number of nodes in linked list : "<<fobj.iCount<<"\n";
	fobj.Dequeue();
	fobj.Display();
	cout<<"Number of nodes in linked list : "<<fobj.iCount<<"\n";
	cout<<"--------------------------------------------------\n\n";
	
	cout<<"Double object\n\n";
	Queue <double>dobj;
	dobj.Enqueue(450.5);
	dobj.Enqueue(345.71);
	dobj.Display();
	cout<<"Number of nodes in linked list : "<<dobj.iCount<<"\n";
	dobj.Dequeue();
	dobj.Display();
	cout<<"Number of nodes in linked list : "<<dobj.iCount<<"\n";
	cout<<"--------------------------------------------------\n\n";
	
	cout<<"Character object\n\n";
	Queue <char>cobj;
	cobj.Enqueue('e');
	cobj.Enqueue('f');
	cobj.Display();
	cout<<"Number of nodes in linked list : "<<cobj.iCount<<"\n";
	cobj.Dequeue();
	cobj.Display();
	cout<<"--------------------------------------------------\n\n";
	
	return 0;
}
