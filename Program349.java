import java.util.*;

class Node
{
	public int Data;
	public Node Next;    // reference // it is just like pointer

	public Node(int No)
	{
		this.Data = No;
		this.Next = null;
	}
}
  // Reference of line no. 3 is kept on the line Number 17 it is just like composition
class SinglyLL
{
	private Node First;     // Head
	private int Count;

	public SinglyLL()
	{
		First = null;
		Count = 0;
	}

	protected void finalize()   // it will work as destructor  
	{
			// Memory free
	}

	public void InsertFirst(int No)
	{
			Node newn = new Node(No);
			// newn.Data = No;
			// newn.Next = null;

			if(this.First == null)
			{
					this.First = newn;
			}
			else
			{
					newn.Next = this.First;
					this.First = newn;
			}
			this.Count++;
	}

	public void InsertLast(int No)
	{
		Node newn = new Node(No);

		if(this.First == null)
		{
			this.First = newn; 
		}
		else
		{
				Node temp = this.First;

				while(temp.Next != null)
				{
						temp = temp.Next;
				}
				temp.Next = newn;
		}
		this.Count++;
	}

	public void DeleteFirst()
	{
			// if(this.First == null)
			// {
			// 	return;
			// }
			// else
			// {
			// 	 this.First = First.Next;
			// }
			// this.Count--;

			if(this.Count == 0)
			{
				return;
			}
			else if(this.Count == 1)
			{
				this.First = null;
			}
			else
			{
					this.First = this.First.Next;
			}
			this.Count--;
	}

	public void DeleteLast()
	{
			if(this.Count == 0)
			{
				return;
			}
			else if(this.Count == 1)
			{
				this.First = null;
			}
			else
			{
				 Node temp = 	this.First;

				 while(temp.Next.Next != null)
				 {
				 	 temp = temp.Next;
				 }
				 temp.Next = null;
			}
			this.Count--;
	}


	public void InsertAtPosition(int No,int ipos)
	{
			if((ipos < 1 ) || (ipos > (Count + 1)))
			{
				 System.out.println("Invalid Position\n");
				 return;
			}

			if(ipos == 1)
			{
				 InsertFirst(No);
			}
			else if(ipos == Count+1)
			{
				 InsertLast(No);
			}
			else
			{
				Node newn = new Node(No);
				Node temp = this.First;

				for(int i = 1;i < ipos-1;i++)
				{
					 temp = temp.Next;
				}

				newn.Next = temp.Next;
				temp.Next = newn;

				this.Count++;
			}
			
	}

	public void DeleteAtPosition(int ipos)
	{
			if((ipos < 1 ) || (ipos > (Count + 1)))
			{
				 System.out.println("Invalid Position\n");
				 return;
			}

			if(ipos == 1)
			{
				 DeleteFirst();
			}
			else if(ipos == Count+1)
			{
				 DeleteLast();
			}
			else
			{
				Node temp = this.First;

				for(int i = 1;i < ipos-1;i++)
				{
					 temp = temp.Next;
				}

				temp.Next = temp.Next.Next;

				this.Count--;
			}
	}

	public void Display()
	{
			Node temp = this.First;

			while(temp != null)
			{
					System.out.print("| "+temp.Data+" |->");
					temp = temp.Next;
			}
			System.out.println("NULL");
	}

	public int CountNodes()
	{
			return this.Count;
	}
}

class Program349
{
	public static void main(String args[])
	{
		SinglyLL obj = new SinglyLL();
		
		obj.InsertFirst(51);
		obj.InsertFirst(21);
		obj.InsertFirst(11);

		obj.Display();
		int Ret = obj.CountNodes();

		System.out.println("Number of nodes are : "+Ret+"\n\n");
		
		obj.InsertLast(100);
		obj.InsertLast(151);

		obj.Display();
		Ret = obj.CountNodes();
		System.out.println("Number of nodes are : "+Ret+"\n\n");

		obj.DeleteFirst();

		obj.Display();
		Ret = obj.CountNodes();
		System.out.println("Number of nodes are : "+Ret+"\n\n");

		obj.DeleteLast();

		obj.Display();
		Ret = obj.CountNodes();
		System.out.println("Number of nodes are : "+Ret+"\n\n");

		obj.InsertAtPosition(221,2);

		obj.Display();
		Ret = obj.CountNodes();
		System.out.println("Number of nodes are : "+Ret+"\n\n");

		obj.DeleteAtPosition(2);

		obj.Display();
		Ret = obj.CountNodes();
		System.out.println("Number of nodes are : "+Ret+"\n\n");

	}
}