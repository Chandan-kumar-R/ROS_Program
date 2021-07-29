#include<iostream>

using namespace std;

bool check_temp(int x, int y)
{
    if(x>100 && y<0)
    {
        return true;
    }
    else if(x<0 && y>100 )
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
    cout<< check_temp(120, -1) <<endl;
    cout<< check_temp(-1, 120) <<endl;
    cout<< check_temp(2, 120) <<endl;
    return 0;
}