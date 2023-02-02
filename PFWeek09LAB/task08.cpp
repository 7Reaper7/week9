#include<iostream>
using namespace std;

main()
{
    int x=0;
    string input;
    cout << "Enter a string=> ";
    getline(cin, input);
    x = input.length();
    for(int y = x; y >= 0; y--)
    {
        cout << input[y] << " ";
    }
}