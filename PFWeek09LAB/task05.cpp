#include<iostream>
using namespace std;

main()
{
    int size;
    int smallest;
    cout << "Enter the size of the array=> ";
    cin >> size;
    int test[size];
    for(int x = 0; x < size; x++)
    {
        cout << "Enter a number=> ";
        cin >> test[x];
        if(x==0)
        {
            smallest = test[0];
        }
        if(test[x] < smallest)
        {
            smallest = test[x];
        }
    }
    cout << smallest;
}