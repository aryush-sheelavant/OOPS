#include<iostream>
using namespace std;

int main()
{
    float length,breadth,area,perimeter;
    cout<<"Enter the length of rectangle :";
    cin>>length;
    cout<<"Enter the breadth of rectangle ;";
    cin>>breadth;
    area=length*breadth;
    perimeter=2*(length+breadth);
    cout<<"Area of rectangle : "<<area<<endl;
    cout<<"Perimeter of rectangle : "<<perimeter;
}