#include<iostream>
#include<string>

using namespace std;
int stack[100], top=-1;

void push(int val)
{
		if(top>100)
			cout<<"The stack is full\n";
		else
		{
			top++;
			stack[top] = val;
			cout<<"Value inserted Successfully\n";
		}
}

int pop()
{
	int temp;
	if(top<=-1)
		cout<<"The stack is empty\n";
	else
	{
		cout<<"The popped element is "<<stack[top]<<"\n";
		stack[top]= 0;
		top--;	
	}
}

void display()
{
	if(top>=0)
	{
		cout<<"stack elements are :\n";
		for(int i=top;i>=0;i--)
		{
			cout<<stack[i]<<"\n";
		}
	}
	else
	cout<<"The stack is empty\n";
}
int main()
{
	int ch,val;
	while(1)
	{
		cout<<"1. Push in stack\n";
		cout<<"2. Pop in stack\n";
		cout<<"3. Display stack\n";
		cout<<"4. Exit\n";
		cout<<"Choose any operation\n";
		cin>>ch;
		switch(ch)
		{
			case 1:
				cout<<"Enter data\n";
				cin>>val;
				push(val);
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
			case 4:
				exit(1);
			default:
				cout<<"please select valid option\n";
		}

	}
	return 0;
}
