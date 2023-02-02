#include<iostream>
using namespace std;

main()
{
    int size;
    int number;
    bool flag = false;
    cout << "Enter the size of the array=> ";
    cin >> size;
    int test[size];
    for(int x = 0; x < size; x++)
    {
        cout << "Enter a number=> ";
        cin >> test[x];
    }
    cout << "Enter the number you want to find in array";
    cin >> number;
    for(int x = 0; x < size; x++)
    {
        if(test[x]==number)
        {
            flag = true;
            break;
        }
    }
    if(flag == true)
    {
        cout << "yes you have entered the number already";
    }
    else
    {
        cout << "you havent entered this number before";
    }
}