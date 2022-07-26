#include<iostream>

using namespace std;

class student
{
public:
	student();
	student(int, string);
	int getDetails();
	void Display();
private:
	int rollno;
	string name;
	friend class sdl;
};
class Node
{
public:
	Node();
	Node(int, string);
private:
	student* data;
	Node* next;
	friend class sdl;
};
class sdl
{
public:
	sdl();
	int isEmpty();
	void insertAtFirst(Node*);
	int display();
private:
	Node* first;
};
student::student()
{
	rollno = 0;
	name = "";
}
student::student(int n, string nm)
{
	rollno = n;
	name = nm;
}
int student::getDetails()
{
	return rollno;
}
void student::Display()
{
	cout << "Roll No : " << rollno;
	cout << "\n Name : " << name;
	cout << "\n";
}
Node::Node()
{
	data = new student();
	next = NULL;
}
Node::Node(int r, string n)
{
	data = new student(r, n);
	next = NULL;
}
sdl::sdl()
{
	first = NULL;
}
int sdl::isEmpty()
{
	if (first == NULL)
		return 1;
	else
		return 0;
}
void sdl::insertAtFirst(Node* newNode)
{
	if (isEmpty())
	{
		first = newNode;
	}
	else
	{
		newNode->next = first;
		first = newNode;
	}
}
int main()
{
	int ch = 0;
	sdl list;
	do
	{
		cout << "Enter the Choice";
		cout << "\n1.Insert At First";

		if (ch == -1)
			break;
		switch(ch)
		{
		case 1:
		{
			int rollno;
			string name;
			cout << "Enter the Roll No: ";
			cin >> rollno;
			cout << "\nEnter the Name:";
			cin >> name;
			Node* newNode = new Node(rollno, name);
			list.insertAtFirst(newNode);
			cout << "Record Inserted At First";
			break;
		}
		case 2:
			if (list.display() == -1)
				cout << "Empty List";
			break;
		}
	} while (ch > 0);
}