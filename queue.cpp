#include <iostream>
using namespace std;
int queue[10], n = 10, front = -1,rear = -1,val;
void Insert()
{
	if(rear == n - 1)
	{
		cout<<"Queue Overflow"<<endl;
	}
	else
	{
		if(front == -1)
		front = 0;
		cout<<"Insert the element in queue :"<<endl;
		cin>>val;
		rear++;
		queue[rear] = val;
	}
}
void Delete()
{
	if(front == -1)
	{
		cout<<"Queue Underflow ";
		return;
	}
	else
	{
		queue[front]=val;
		front++;
	}
}
void Display()
{
	if(front == -1)
	cout<<"Queue is empty"<<endl;
	else
	{
		cout<<"Queue element are : ";
		for(int i = front;i <= rear; i++)
		cout<<queue[1]<<" ";
		cout<<endl;
	}
}
int main()
{
	int ch;
	cout<<"1) Insert element to queue"<<endl;
	cout<<"2) Delete element from queue"<<endl;
	cout<<"3) Display all the element of queue"<<endl;
	cout<<"4) Exit"<<endl;
	do{
		cout<<"Enter your choise : "<<endl;
		cin>>ch;
		switch (ch)
		{
			case 1: Insert();
			break;
			case 2: Delete();
			break;
			case 3: Display();
			break;
			case 4: cout<<"Exit"<<endl;
			break;
			default: cout<<"Invalid choice"<<endl;
		}
	}while(ch!=4);
	return 0;
}
