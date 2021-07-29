#include<iostream>
using namespace std;

// void swap(int x, int y)
// {
//     int temp = x;
//     x = y;
//     y = temp;

//     cout<<"after swapping: "<<x <<" and " <<y <<endl;
// }

// int main()
// {
//     int a, b;
//     cout<<"enter the value of a and b: "<<endl;
//     cin>>a>>b;
//     cout<<"before swapping: "<<a <<" and " <<b <<endl;
//     swap(a,b);
//     return 0;
// }

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;

    cout<<"after swapping: "<<*x <<" and " <<*y <<endl;
}

int main()
{
    int a, b;
    cout<<"enter the value of a and b: "<<endl;
    cin>>a>>b;
    cout<<"before swapping: "<<a <<" and " <<b <<endl;
    swap(&a,&b);
    cout<<"after swapping in main: "<<a <<" and " <<b <<endl;
    return 0;
}