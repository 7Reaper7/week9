#include<iostream>
using namespace std;

main()
{
    int x=0;
    string input;
    cout << "Enter a string=> ";
    getline(cin,input);

    while(input[x] != '\0')
    {
        if(input[x] == 'a' || input[x] == 'e' || input[x] == 'i' || input[x] == 'o' || input[x] == 'u' ||
        input[x] == 'A' || input[x] == 'E' || input[x] == 'I' || input[x] == 'O' || input[x] == 'U')
        {
            x++;
            continue;
        }
        cout << input[x];
        x++;
    }
}