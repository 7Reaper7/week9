#include<iostream>
using namespace std;

main()
{
    char alphabets[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    string input;
    cout << "Enter a word=> ";
    cin >> input;
    int ch = input.length();
    for(int y = 0; y < ch; y++)
    {
        bool flag = false;
        for(int x = 0; x < 26; x++)
        {
            if(alphabets[x]==input[y])
            {
                flag = true;
            }
            if(flag == true)
            {
                input[y] = alphabets[x+1];
                break;
            }
        }
    }
    cout << input;
}