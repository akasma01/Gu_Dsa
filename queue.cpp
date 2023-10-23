#include<iostream>
#include<string>

using namespace std;

int queue[100],front=-1,rear=-1;
void insert()
{
	int val;
	if(rear==99)
	cout<<"queue overflow\n";
	else
	{
		if front==-1;
		front=0;
		cout<<"Insert the element in the queue\n";
		cin>>val;
		rear++;
		queue[rear]=val;
	}
}

void delete()
{
	if(front=-1||front>rear)
	{
	
	cout<<"Queue Underflow\n";
	return;
	}
	else
	{
		cout<<"The element is deleted from queue\n";
		front++;
	}

	
}

void display()
{
	if(front=-1)
	cout<<"The queue is empty\n";
	else
	{
		cout<<"the queue elements are 
	}
}
