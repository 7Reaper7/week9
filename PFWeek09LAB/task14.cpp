#include<iostream>
using namespace std;

main()
{
    int first[2];
    int second;
    cout << "Enter the length of the second array=> ";
    cin >> second;
    int insert[second+2];
    for(int x = 0; x < 2; x++)
    {
        cout << "Enter the values for the first array=> ";
        cin >> first[x];
        if(x==0)
        {
            insert[0] = first[0];
        }
        else
        {
            insert[second+1] = first[1];
        }
    }
    cout << endl;
    for(int x = 1; x < second+1; x++)
    {
        cout << "Enter the values for the second array=> ";
        cin >> insert[x];
    }
    for(int x = 0; x < second+2; x++)
    {
        cout << insert[x] << " ";
    }
}