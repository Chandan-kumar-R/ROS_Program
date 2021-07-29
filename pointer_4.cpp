// Write a program in C to add two numbers using pointers

#include<iostream>

using namespace std;

int main()
{
    int a, b,c;
    cout<<"enter the both the number: ";
    cin>>a>>b;
    int *d = &c;

    c = a+b;
    cout<<"The address of res value is: "<<d<<endl;
    cout<<"The result of addition is: "<<*d<<endl;
}