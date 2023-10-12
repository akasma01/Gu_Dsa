// opps1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>

using namespace std;
class student
{
    string id, name, dept;
    int* marks = new int(3);
public:
    student()
    {
        id = "";
        name = "";
        dept = "";
    }

    void inputData(string sid,string sname,string sdept,int smarks[])
    {
        id = sid;
        name = sname;
        dept = sdept;
        for(int i=0;i<3;i++)
        {
            *marks[i] = smarks[i];

        }
         
    }

    void displayData()
    {
        cout << "Following are the details of the students";
        cout << "Student Id" << id << "\n";
        cout << "Student Id" << id << "\n";
        cout << "Student Id" << id<<"\n";
        for (int i = 0; i < 3; i++)
        {
            cout << "marks for subject %d" << i  << *marks[i];
        }
    }
};
int main()
{
    int marks[3],m;
    string id, name, dept;
    student s[2];

    for (int i = 0; i < 2; i++)
    {
        cout << "Enter student details\n";
        cout << "Enter student id\n";
        cin >> id;
        cout << "Enter student Name\n";
        cin >> name;
        cout << "Enter student department Name\n";
        cin >> dept;
        for (i = 1; i <=3; i++)
        {
            cout << "Enter student's marks "<<i<<"\n";
            cin >> marks[i];
        }
        
        s[i].inputData(id,name,dept,marks);
    }

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
