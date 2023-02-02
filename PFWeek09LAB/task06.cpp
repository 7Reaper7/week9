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
        cout << "The char at " << x << " index of the string is=> " << name[x] << endl;
        x++;
    }
}