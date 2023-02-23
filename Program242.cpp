#include<iostream>
using namespace std;

#pragma pack(1)
template <class T>
struct node
{
	T data;
	struct node *next;
};

template<class T>
class Stack
{
	public:
		struct node<T> * First;
		int iCount;
		
		Stack();
		
		bool IsStackEmpty();
		void Push(T no);
		T Pop();
		void Display();
};

template <class T>
Stack<T> :: Stack()
{
	First = NULL;
	iCount = 0;	
}
template <class T>
bool Stack<T> :: IsStackEmpty()
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
void Stack<T> :: Push(T no)
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
		newn->next = First;
		First = newn;
	}
	iCount++;
	cout<<no<<" gets pushed in the stack successfully"<<"\n\n";
}

template <class T>
T Stack<T> :: Pop()
{
	if(First == NULL)
	{
		cout<<"Unable to pop the element as stack is empty."<<"\n";
		return (T) -1; 
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
void Stack<T> :: Display()
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
			cout<<"| "<<temp->data<<" |"<<"\n";
			temp = temp->next;
		}
		cout<<" NULL"<<"\n\n";
	}
	
}

int main()
{
	cout<<"Integer object\n\n";
	Stack <int>iobj;
	iobj.Push(40);
	iobj.Push(30);
	iobj.Push(20);
	iobj.Push(10);
	iobj.Display();
	cout<<"Number of elemets in the stack : "<<iobj.iCount<<"\n\n";
	int iRet = iobj.Pop();
	cout<<"Poped element is : "<<iRet<<"\n\n";
	iobj.Display();
	cout<<"Number of elemets in the stack : "<<iobj.iCount<<"\n\n";	
	
	iRet = iobj.Pop();
	cout<<"Poped element is : "<<iRet<<"\n\n";
	iobj.Display();
	cout<<"Number of elemets in the stack : "<<iobj.iCount<<"\n\n";	
	cout<<"---------------------------------------------------------\n\n";
	
	cout<<"Float object\n\n";
	Stack <float>fobj;
	fobj.Push(57.3);
	fobj.Push(34.4);
	fobj.Push(23.1);
	fobj.Push(10.5);
	fobj.Display();
	cout<<"Number of elemets in the stack : "<<fobj.iCount<<"\n\n";
	iRet = fobj.Pop();
	cout<<"Poped element is : "<<iRet<<"\n\n";
	fobj.Display();
	cout<<"Number of elemets in the stack : "<<fobj.iCount<<"\n\n";	
	
	iRet = fobj.Pop();
	cout<<"Poped element is : "<<iRet<<"\n\n";
	fobj.Display();
	cout<<"Number of elemets in the stack : "<<fobj.iCount<<"\n\n";	
	cout<<"---------------------------------------------------------\n\n";
	
	cout<<"Double object\n\n";
	Stack <double>dobj;
	dobj.Push(421.43);
	dobj.Push(342.27);
	dobj.Push(257.78);
	dobj.Push(100.13);
	dobj.Display();
	cout<<"Number of elemets in the stack : "<<dobj.iCount<<"\n\n";
	iRet = dobj.Pop();
	cout<<"Poped element is : "<<iRet<<"\n\n";
	dobj.Display();
	cout<<"Number of elemets in the stack : "<<dobj.iCount<<"\n\n";	
	
	iRet = dobj.Pop();
	cout<<"Poped element is : "<<iRet<<"\n\n";
	dobj.Display();
	cout<<"Number of elemets in the stack : "<<dobj.iCount<<"\n\n";	
	cout<<"---------------------------------------------------------\n\n";
		
	cout<<"Character object\n\n";
	Stack <char>cobj;
	cobj.Push('d');
	cobj.Push('c');
	cobj.Push('b');
	cobj.Push('a');
	cobj.Display();
	cout<<"Number of elemets in the stack : "<<cobj.iCount<<"\n\n";
	iRet = cobj.Pop();
	cout<<"Poped element is : "<<iRet<<"\n\n";
	cobj.Display();
	cout<<"Number of elemets in the stack : "<<cobj.iCount<<"\n\n";	
	
	iRet = cobj.Pop();
	cout<<"Poped element is : "<<iRet<<"\n\n";
	cobj.Display();
	cout<<"Number of elemets in the stack : "<<cobj.iCount<<"\n\n";	
	cout<<"---------------------------------------------------------\n\n";
	
	return 0;
}
