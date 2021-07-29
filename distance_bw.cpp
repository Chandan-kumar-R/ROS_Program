#include<iostream>

using namespace std;

class distance_bw
{
    private:
    int x;
    int y;

    public:
    distance_bw(int a, int b)
    {
        x=a;
        y=b;
    }

    void display_point(void)
    {
        cout<<"The point on the coordinate is ("<<x <<" , "<<y <<")" <<endl;
    }
};

int main()
{
    distance_bw X(4,3);
    X.display_point();

    distance_bw Y(8,5);
    Y.display_point();

}
