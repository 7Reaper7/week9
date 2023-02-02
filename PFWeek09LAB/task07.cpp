#include<iostream>
using namespace std;

main()
{
    string name;
    int x = 0;
    cout << "Enter a string=> ";
    getline(cin, name);
    while(name[x] != '\0')
    {
        x++;
    }
    if(x%2==0)
    {
        cout << "Even";
    }
    else
    {
        cout << "Odd";
    }
}