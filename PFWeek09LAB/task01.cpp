#include<iostream>
using namespace std;

main()
{
    int size;
    float average;
    float sum=0;
    cout << "Enter the size of the array=> ";
    cin >> size;
    int test[size];
    for(int x = 0; x < size; x++)
    {
        cout << "Enter a number=> ";
        cin >> test[x];
        sum = sum + test[x];
    }
    average = sum/size;
    cout << sum << endl;
    cout << average;
}