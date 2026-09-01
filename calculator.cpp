#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter \n 1: Addition\n 2: Subtraction\n 3: Multiplication\n 4: Division\n 5:Modulus\n";
    cin>>num;

    int a,b;
    cout<<"Enter two numbers: "<<endl;
    cin>>a>>b;

    switch(num)
    {
        case 1:
            cout<<"Result: "<<a+b<<endl;
            break;
        case 2:
            cout<<"Result: "<<a-b<<endl;
            break;
        case 3:
            cout<<"Result: "<<a*b<<endl;
            break;
        case 4:
            cout<<"Result: "<<a/b<<endl;
            break;
        case 5:
            cout<<"Result: "<<a%b<<endl;
            break;
        default:
            cout<<"Invalid input"<<endl;
    }
}