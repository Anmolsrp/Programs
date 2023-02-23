#include<iostream>
using namespace std;

struct node
{
	int data;
	struct node *next;
};

class Stack
{
	public:
		struct node * First;
		int iCount;
		
		Stack();
		
		bool IsStackEmpty();
		void Push(int no);
		int Pop();
		void Display();
};

Stack :: Stack()
{
	First = NULL;
	iCount = 0;	
}

bool Stack :: IsStackEmpty()
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

void Stack :: Push(int no)
{
	struct node * newn = new struct node;
	
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

int Stack :: Pop()
{
	if(First == NULL)
	{
		cout<<"Unable to pop the element as stack is empty."<<"\n";
		return -1;
	}
	else
	{
		int value = First->data;
		struct node * temp = First;
		
		First = First->next;
		delete temp;
		
		iCount--;
		return value;
	}
}
	
void Stack :: Display()
{
	if(First == NULL)
	{
		cout<<"Stack is empty."<<"\n";
	}
	else
	{
		struct node * temp = First;
	
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
	Stack obj;
	
	obj.Push(40);
	obj.Push(30);
	obj.Push(20);
	obj.Push(10);
	obj.Display();
	cout<<"Number of elemets in the stack : "<<obj.iCount<<"\n\n";
	int iRet = obj.Pop();
	cout<<"Poped element is : "<<iRet<<"\n\n";
	obj.Display();
	cout<<"Number of elemets in the stack : "<<obj.iCount<<"\n\n";	
	
	iRet = obj.Pop();
	cout<<"Poped element is : "<<iRet<<"\n\n";
	obj.Display();
	cout<<"Number of elemets in the stack : "<<obj.iCount<<"\n\n";	
	return 0;
}
