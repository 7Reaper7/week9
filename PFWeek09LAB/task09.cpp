#include<iostream>
using namespace std;

main()
{
    int x=0;
    char letter;
    string input;
    cout << "Enter a string=> ";
    getline(cin, input);
    cout << "Enter a character=> ";
    cin >> letter;
    x = input.length();
    
    if(letter == input[x-1])
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }

}