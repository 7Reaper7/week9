#include<iostream>
using namespace std;

main()
{
    char letter;
    string input;
    bool flag = false;

    cout << "Enter a string=> ";
    getline(cin, input);
    cout << "Enter a character=> ";
    cin >> letter;
    int x = input.length();
    
    for(int y = 0; y < x; y++)
    {
        if(letter == input[y])
        {
            flag = true;
            break;
        }
    }
    if(flag == true)
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }
}