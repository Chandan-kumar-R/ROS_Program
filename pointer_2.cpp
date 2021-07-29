#include<iostream>

using namespace std;

int main()
{
    int a, b;
    
    cout<<"Enter the value :" <<endl;
    cin>>a>>b;

    int *ptrA;
    ptrA=&a;
    int *ptrB;
    ptrB = &b;

    cout <<"the value of a is " <<*ptrA <<endl;
    cout <<"the value of b is " <<*ptrB <<endl;
}