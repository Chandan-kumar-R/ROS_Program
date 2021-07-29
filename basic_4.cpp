#include<iostream>
#include<string>

using namespace std;

bool check_int(int x)
{
    if(x%3==0 || x%7==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    //int z;
    // cout<<"enter the value of z: ";
    // cin>>z;
    cout<< check_int(3)<<endl;
    cout<<check_int(14)<<endl;
    cout<<check_int(12)<<endl;
    cout<<check_int(37)<<endl;
}