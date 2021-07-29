#include<iostream>

using namespace std;

int main()
{
    int a =5;
    int b = 8;
    float d = 7.8;
    int *p;
    p = &a;
    p = &b;
    //p = &d;

    cout<<"The address of b " <<b <<" is " <<p <<endl;
    cout<<"The address of a " <<a <<" is " <<p <<endl;

//     cout<<"The address of " <<a <<" is " <<&a <<endl;
//     cout<<"The address of " <<a <<" is " <<p <<endl;
//     cout<<"The value of " <<a <<" is " <<*p <<endl;
    
// // pointer to pointer
//     int **c = &p;

//     cout<<"The address of  pointer p " <<" is " <<&p <<endl;
//     cout<<"The address of  pointer p " <<" is " <<c <<endl;
//     cout<<"The value of pointer p is: "<<" is " <<**c <<endl;


// --------------------------------------------------------------------------------------------

    int numbers [10];
    int *pnumbers = numbers;
    for (int i=0; i<10;i++)
    {
        cout<<"number adress "<<i <<" : " <<pnumbers +i <<endl;
    }

    return 0;
}