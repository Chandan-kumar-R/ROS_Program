// Write a C++ program to find the max of an integral data set.
// The program will ask the user to input the number of data values in the set and each value.
// The program prints on screen a pointer that points to the max value.

#include <iostream>

using namespace std;

int main()
{
    int n, i, j;
    int arr[n];
    int max = 0;

    cout << "enter the number of values: ";
    cin >> n;

    cout << "enter the number of values in a array: ";

    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> arr[i];
    }

    for (int j = 0; j <= n; j++)
    {
        /* code */
        if (arr[j] > max)
        {
            max = arr[j];
        }
    }

    int *pointer= &max;


  cout<<"Largest integer value in the array is "<<*pointer;

  return 0;
}
