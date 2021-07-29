#include<iostream>

using namespace std;

int main()
{
    int arr[10];
    int n;

    cout<<"Enter the array element: "<<endl;
    for(int i=0; i<10; i++)
    {
        cin>>arr[i];
    }

    cout<<"enter the value of n: ";
    cin>>n;
    int found =0;

    for(int i=0; i<10;i++)
    {
        if(arr[i] ==n)
        {
            found = 1;
            break;
        }
    }
    if(found)
        cout<<"prsent"<<endl;
    else
        cout<<"not found";

}