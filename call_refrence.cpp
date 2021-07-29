//Write a program in C to add numbers using call by reference.

#include<iostream>
using namespace std;

int add(int *a, int *b)
{
    int sum=  *a + *b;
    return sum;
}

int main()
{
    int x, y,sum;
    cout<<"enter both the number: "<<endl;
    cin>>x>>y;

    sum = add(&x,&y);
    cout<<"the addition of 2 number is: "<<sum;
}