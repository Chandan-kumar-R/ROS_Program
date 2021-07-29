#include<iostream>

using namespace std;

int main()
{
    int arr[10];
    int pos =0;
    int neg =0;
    int odd =0;
    int even =0;
    int zero =0;

    cout<<"Enter the array element: "<<endl;
    for(int i=0; i<10; i++)
    {
        cin>>arr[i];

        if(arr[i]>0)
            pos++;
        else if(arr[i]<0)
            neg++;
        else
            zero++;

        if(arr[i]%2==0)
            even++;
        else
            odd++;
    }

    cout <<"positive" <<pos <<endl <<"negative" <<neg <<endl <<"even"<<even <<endl <<"odd"<<odd <<endl <<"zero"<<zero;
}