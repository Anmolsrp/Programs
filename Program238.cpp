#include<iostream>
using namespace std;

#pragma pack(1)
struct node
{
	int data;
	struct node *next;
};
typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

class SinglyLL
{
	public:
		PNODE First;
//		int Count;
		
		SinglyLL();
		
		void InsertFirst();
		void InsertLast();
		void InsertAtPosition();
		
		void DeleteFirst();
		void DeleteLast();
		void DeleteAtPostion();
		
		void Display();
			
};

SinglyLL :: SinglyLL()
{
	First = NULL;
}

void SinglyLL :: InsertFirst()
{
	
}

void SinglyLL :: InsertLast()
{
	
}

int main()
{
	SinglyLL obj;
	
	//obj.InsertFirst(10);
	
	return 0;
}
