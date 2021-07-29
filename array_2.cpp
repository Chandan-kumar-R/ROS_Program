// Write a C++ program to find the largest element of a given array of integers

#include<iostream>
using namespace std;

int main()
{
    int arr[5];
    // int max;
    // max= arr[0];

    cout<<"enter the array elements: "<<endl;
    for(int i=0; i<5; i++)
    {
        cin>>arr[i];
    }

    cout<<"displaying the array value:"<<endl;
    for(int j=0; j<5; j++)
    {
         cout<<arr[j] <<endl;
    }

    for(int i = 1; i<5;i++)
    {
       if (arr[0]< arr[i])
       {
           arr[0]=arr[i];
       }
    }
    cout<<"largest value is: "<<arr[0] <<endl;
}