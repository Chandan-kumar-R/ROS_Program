#include<iostream>

using namespace std;

bool check_int(int x, int y)
{
    if (x==30 || y==30 || (x+y == 30))
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
    int x,y;
    cout<<check_int(30,0)<<endl;
    cout<<check_int(25,5)<<endl;
    cout<<check_int(20,30)<<endl;
    cout<<check_int(20,25)<<endl;
    return 0;
}