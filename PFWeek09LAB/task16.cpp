#include<iostream>
using namespace std;

main()
{
    string something = "Something ";
    string input;
    cout << "Enter a string=> ";
    getline(cin, input);

    cout << something << input;
}