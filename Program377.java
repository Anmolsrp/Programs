import java.util.*;

class Student
{
	public String Sname;
	public int Marks;
	public int Rollno;

	private static int Generator;

	static
	{
		Generator = 0;
	}

	public Student(String str,int no)
	{	
		this.Sname = str;
		this.Marks = no;
		Generator++;
		this.Rollno = Generator;
	}

	public void Display()
	{
		System.out.println("Roll No : "+Rollno+" Name : "+Sname +" Marks : "+Marks);
	}	
}

class DBMS
{
	public LinkedList <Student> lobj;

	public DBMS()
	{
		lobj = new LinkedList();
	}

	public void StartDBMS()
	{
		System.out.println("Marvellous Customised DBMS started successfully...\n");
	}

	// All SQL queries should be implemented here

	// Insert into student values(____,____);
	public void Insert(String str,int no)
	{
		Student sobj = new Student(str,no);
		lobj.add(sobj);
	}

	// select * from student;
	public void DisplayAll()
	{
		for(Student sref : lobj)
		{
			sref.Display();
		}
	}

	// select * from student where Rollno =  ;
	public void DisplaySpecific(int Value)
	{
		for(Student sref : lobj)
		{
			if(sref.Rollno == Value)
			{
				sref.Display();
				break;
			}
		}
	}

	// select * from student where Name = " ";
	public void DisplaySpecific(String str)
	{
		for(Student sref : lobj)
		{
			if(str.equals(sref.Sname))
			{
				sref.Display();
				break;
			}
		}
	}

	// Delete from student where Rollno = 3;
	public void Delete(int no)
	{
		int index = 0;

		for(Student sref : lobj)
		{
			if(sref.Rollno == no)
			{
				lobj.remove(index);
				break;
			}
			index++;
		}
	}

	// Delete from student where Name = " ";
	public void Delete(String str)
	{
		int index = 0;

		for(Student sref : lobj)
		{
			if(str.equals(sref.Sname))
			{
				lobj.remove(index);
				break;
			}
			index++;
		}
	}

	// total marks sum query
	public void Sum()
	{
		int iSum = 0;

		for(Student sref : lobj)
		{
			iSum = iSum + (sref.Marks);
		}

		System.out.println("Summation of marks : "+iSum);
	}

	// minimum marks query
	public void Minimum()
	{
		Student s = lobj.get(0);
		int iMin = s.Marks;

		for(Student sref : lobj)
		{
			if(iMin > (sref.Marks))
			{
				iMin = (sref.Marks);
			}
		}

		System.out.println("Minimum Marks : "+iMin);
	}

	// Maximum marks query
	public void Maximum()
	{
		int iMax = 0;

		for(Student sref : lobj)
		{
			if(iMax < (sref.Marks))
			{
				iMax = (sref.Marks);
			}
		}

		System.out.println("Maximum Marks : "+iMax);
	}

	// Average marks query
	public void Average()
	{
		int iSum = 0;

		for(Student sref : lobj)
		{
			iSum = iSum + (sref.Marks);
		}
		System.out.println("Average of  Marks : "+iSum / lobj.size());
	}
}

class Program377
{
	public static void main(String args[])
	{
		//Scaner sobj = new Scanner(System.in);
		DBMS dobj = new DBMS();

		dobj.StartDBMS();	

		dobj.Insert("Kartik",90);
		dobj.Insert("Rutuja",96);
		dobj.Insert("Anmol",80);
		dobj.Insert("Pooja",67);
		dobj.Insert("Rahul",91);

		dobj.DisplayAll();

		dobj.DisplaySpecific(3);
		dobj.DisplaySpecific("Rutuja");
		
		dobj.Delete(3);
		
		dobj.DisplayAll();

		dobj.Delete("Rutuja");

		System.out.println("\nFinal Data : ");
		dobj.DisplayAll();

		dobj.Sum();
		dobj.Minimum();
		dobj.Maximum();
		dobj.Average();
		
	}
}