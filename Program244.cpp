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
class Queue
{
	public:
		struct node<T> * First;
		int iCount;
		
		Queue();

		bool IsEmptyQueue();		
		void enQueue(T no);
		T deQueue();
		void Display();
};

template <class T>
Queue<T> :: Queue()
{
	First = NULL;
	iCount = 0;
}

template <class T>
bool Queue<T> :: IsEmptyQueue()
{
	if(iCount == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

template <class T>
void Queue<T> :: enQueue(T no)
{
	struct node<T> * newn = new struct node<T>;
	
	newn->data = no;
	newn->next = NULL;
	
	if(First == NULL)
	{
		First = newn;
	}
	else
	{
		struct node<T> * temp = First;
		
		while(temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newn;
	}
	iCount++;
	cout<<no<<" gets pushed in the stack successfully"<<"\n\n";
}

template <class T>
T Queue<T> :: deQueue()
{
	if(First == NULL)
	{
		cout<<"Unable to pop the element as stack is empty."<<"\n";
		return -1; 
	}
	else
	{
		int value = First->data;
		struct node<T> * temp = First;
		
		First = First->next;
		delete temp;
		
		iCount--;
		return value;
	}
}

template <class T>
void Queue<T> :: Display()
{
	if(First == NULL)
	{
		cout<<"Stack is empty."<<"\n";
	}
	else
	{
		struct node<T> * temp = First;
	
		while(temp != NULL)
		{
			cout<<"| "<<temp->data<<" |->";
			temp = temp->next;
		}
		cout<<"NULL"<<"\n\n";
	}
}

int main()
{
	Queue <int>iobj;
	iobj.enQueue(40);
	iobj.enQueue(30);
	iobj.enQueue(20);
	iobj.enQueue(10);
	iobj.Display();
	cout<<"Number of elemets in the stack : "<<iobj.iCount<<"\n\n";
	int iRet = iobj.deQueue();
	cout<<"Poped element is : "<<iRet<<"\n\n";
	iobj.Display();
	cout<<"Number of elemets in the stack : "<<iobj.iCount<<"\n\n";	
	
	iRet = iobj.deQueue();
	cout<<"Poped element is : "<<iRet<<"\n\n";
	iobj.Display();
	cout<<"Number of elemets in the stack : "<<iobj.iCount<<"\n\n";	
	cout<<"----------------------------------------------------------\n\n";
	
	Queue <float>fobj;
	fobj.enQueue(10.5);
	fobj.enQueue(25.4);
	fobj.enQueue(37.8);
	fobj.enQueue(45.3);
	fobj.Display();
	cout<<"Number of elemets in the stack : "<<iobj.iCount<<"\n\n";
	iRet = fobj.deQueue();
	cout<<"Poped element is : "<<iRet<<"\n\n";
	fobj.Display();
	cout<<"Number of elemets in the stack : "<<fobj.iCount<<"\n\n";	
	
	iRet = fobj.deQueue();
	cout<<"Poped element is : "<<iRet<<"\n\n";
	fobj.Display();
	cout<<"Number of elemets in the stack : "<<fobj.iCount<<"\n\n";
	cout<<"----------------------------------------------------------\n\n";
	
	Queue <double>dobj;
	dobj.enQueue(100.51);
	dobj.enQueue(250.27);
	dobj.enQueue(378.89);
	dobj.enQueue(450.34);
	dobj.Display();
	cout<<"Number of elemets in the stack : "<<dobj.iCount<<"\n\n";
	iRet = dobj.deQueue();
	cout<<"Poped element is : "<<iRet<<"\n\n";
	dobj.Display();
	cout<<"Number of elemets in the stack : "<<dobj.iCount<<"\n\n";	
	
	iRet = dobj.deQueue();
	cout<<"Poped element is : "<<iRet<<"\n\n";
	dobj.Display();
	cout<<"Number of elemets in the stack : "<<dobj.iCount<<"\n\n";
	cout<<"----------------------------------------------------------\n\n";
	
	Queue <char>cobj;
	cobj.enQueue('a');
	cobj.enQueue('b');
	cobj.enQueue('c');
	cobj.enQueue('d');
	cobj.Display();
	cout<<"Number of elemets in the stack : "<<cobj.iCount<<"\n\n";
	iRet = cobj.deQueue();
	cout<<"Poped element is : "<<iRet<<"\n\n";
	cobj.Display();
	cout<<"Number of elemets in the stack : "<<cobj.iCount<<"\n\n";	
	
	iRet = cobj.deQueue();
	cout<<"Poped element is : "<<iRet<<"\n\n";
	cobj.Display();
	cout<<"Number of elemets in the stack : "<<cobj.iCount<<"\n\n";			
	cout<<"----------------------------------------------------------\n\n";
	
	return 0;
}
