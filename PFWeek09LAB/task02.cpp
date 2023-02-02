#include<iostream>
using namespace std;

main()
{
    int size;
    cout << "Enter the size of the array=> ";
    cin >> size;
    int test[size];
    for(int x = 0; x < size; x++)
    {
        cout << "Enter a number=> ";
        cin >> test[x];
    }
    for(int x = size-1; x >= 0; x--)
    {
        cout << test[x] << endl;
    }
}