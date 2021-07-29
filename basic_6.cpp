#include<iostream>

using namespace std;

int largest_int(int x, int y, int z)
{
    if (x>y && x>z)
    {
        return x;
    }
    else if (y>x && y>z)
    {
        return y;
    }
    else
    {
        return z;
    }
}

int main()
{
    cout <<largest_int(1,2,3)<<endl;
    cout <<largest_int(1,3,2)<<endl;
    cout <<largest_int(1,1,1)<<endl;
    cout <<largest_int(1,2,2)<<endl;
}