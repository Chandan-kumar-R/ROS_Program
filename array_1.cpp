#include<iostream>
#include<iomanip>

using namespace std;
using std::setw;
int main()
{
    int arr[3];

    cout<<"enter the array element"<<endl;
    for(int i=0; i<3; i++)
    {
        arr[i] = i+100;
    }

    cout << "Element" << setw( 13 ) << "Value" << endl;
    //cout<<"displaying the array element:" <<endl;

    for(int j=0; j<3;j++)
    {
        //cout<<arr[j]<<endl;
        cout << setw( 7 )<< j << setw( 13 ) << arr[ j ] << endl;
    }
}