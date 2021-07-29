#include<iostream>
using namespace  std;

int main()
{
    int a=51;
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    if(n>a)
    {
        cout<<"the difference is: "<<(n-a)*3;
    }
    else
    {
        cout<<"the difference is: "<<(a-n);
    }
}