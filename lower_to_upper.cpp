#include<iostream>
#include<cctype>
using namespace std;

int main()
{
    char str[50];
    cout<<"Enter a string: ";
    cin.getline(str,50);

    for(int i=0;str[i]!='\0';i++)
    {
        if(islower(str[i]))
        {
            str[i]=toupper(str[i]);
        }
    }

    cout<<"String in upper case: "<<str<<endl;

}