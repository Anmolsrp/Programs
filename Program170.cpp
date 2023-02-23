#include<iostream>
using namespace std;

#pragma pack
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
		
		SinglyLL()
		{
			PNODE First = NULL; 
		}
		
		void InsertFirst(int no);
		void InsertLast(int no);
		void InsertAtPosition(int no,int ipos);
		
		void DeleteFirst();
		void DeleteLast();
		void DeleteAtPosition(int ipos);
		
		void Display();
		void Count();
			
};

int main()
{
	
	SinglyLL obj;
	
	return 0;
}
