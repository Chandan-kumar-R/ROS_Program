#include<iostream>
using namespace std;

int main()
{
    //int i =0,
    int n;
    int marks[n];

    cout<<"enter the value of n:"<<endl;
    cin>>n;
    cout<<"reading the value in array:"<<endl;
    for (int j=0;j<n;j++)
    {
        cin>>marks[j];
    }

    for (int j=0;j<n;j++)
    {
        cout<<"The values of : "<<marks[j] <<endl;
    }

    // cout<<"using while loop:"<<endl;
    // while (i<4)
    // {
    //     cout<<marks[i]<<endl;
    //     i++;
    // }
}