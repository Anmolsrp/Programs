#include<iostream>
using namespace std;

#pragma pack(1)
struct node
{
	int data;
	struct node *next;
};

class Queue
{
	public:
		struct node * First;
		int iCount;
		
		Queue();

		bool IsEmptyQueue();		
		void enQueue(int no);
		int deQueue();
		void Display();
};

Queue :: Queue()
{
	First = NULL;
	iCount = 0;
}

bool Queue :: IsEmptyQueue()
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

void Queue :: enQueue(int no)
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
		struct node * temp = First;
		
		while(temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newn;
	}
	iCount++;
}

int Queue :: deQueue()
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

void Queue :: Display()
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
			cout<<"| "<<temp->data<<" |->";
			temp = temp->next;
		}
		cout<<"NULL"<<"\n\n";
	}
}

int main()
{
	Queue obj;
	
	obj.enQueue(40);
	obj.enQueue(30);
	obj.enQueue(20);
	obj.enQueue(10);
	obj.Display();
	cout<<"Number of elemets in the stack : "<<obj.iCount<<"\n\n";
	int iRet = obj.deQueue();
	cout<<"Poped element is : "<<iRet<<"\n\n";
	obj.Display();
	cout<<"Number of elemets in the stack : "<<obj.iCount<<"\n\n";	
	
	iRet = obj.deQueue();
	cout<<"Poped element is : "<<iRet<<"\n\n";
	obj.Display();
	cout<<"Number of elemets in the stack : "<<obj.iCount<<"\n\n";	
	return 0;
}
