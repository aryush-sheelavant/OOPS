#include<iostream>
using namespace std;

int main()
{
    cout<<"Student Result Analysis System"<<endl;

    int students;
    cout<<"Enter the number of students: ";
    cin>>students;

    int marks[100][students];

    for(int i=0;i<students;i++)
    {
        cout<<"Enter marks for student : "<<i+1<<endl;
        for(int j=0;j<100;j++)
        {
            cin>>marks[j][i];
        }
    }    return 0;

}