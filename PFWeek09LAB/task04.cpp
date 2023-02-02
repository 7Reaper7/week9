#include<iostream>
using namespace std;

main()
{
    int size;
    int number;
    cout << "Enter the size of the array=> ";
    cin >> size;
    int test[size];
    for(int x = 0; x < size; x++)
    {
        cout << "Enter a number=> ";
        cin >> test[x];
    }
    cout << "Enter a number to multiply each with=> ";
    cin >> number;
    for(int x = size-1; x >= 0; x--)
    {
        cout << number*test[x] << endl;
    }
}