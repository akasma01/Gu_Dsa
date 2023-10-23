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
		if(front==-1);
		front=0;
		cout<<"Insert the element in the queue\n";
		cin>>val;
		rear++;
		queue[rear]=val;
	}
}

void del()
{
	if(front=-1||front>rear)
	{
	cout<<"Queue Underflow\n";
	}
	else
	{
		cout<<"The element is deleted from queue\n";
		front++;
	}

	
}

void display()
{
	if(front==-1)
	cout<<"The queue is empty\n";
	else
	{
		cout<<"the queue elements are :\n";
		for(int i=front;i<=rear;i++)
		{
			cout<<queue[i]<" \n";
		}
	}
}

int main() {
   int ch;
   cout<<"1) Insert element to queue\n"<<endl;
   cout<<"2) Delete element from queue\n"<<endl;
   cout<<"3) Display all the elements of queue\n"<<endl;
   cout<<"4) Exit\n"<<endl;
   do {
      cout<<"Enter your choice :\n "<<endl;
      cin>>ch;
      switch (ch) {
         case 1: insert();
         break;
         case 2: del();
         break;
         case 3: display();
         break;
         case 4: cout<<"Exit\n"<<endl;
         break;
         default: cout<<"Invalid choice\n"<<endl;
      }
   } while(ch!=4);
   return 0;
}
