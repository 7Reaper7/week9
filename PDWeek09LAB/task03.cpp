#include<iostream>
using namespace std;

/*function to check whether the length of the input string is even or odd
inputs string type data which is the input string
outputs string type true or false based on even and odd respectively*/
string checkLength(string);

main()
{
    string name;
    string check;

    cout << "Enter a string=> ";
    getline(cin, name);
    
    check = checkLength(name);
    cout << check;

}

string checkLength(string name)
{
    int x = 0;
    string send = "false";
    while(name[x] != '\0')
    {
        //to calculate the length of the string
        x++;
    }
    if(x%2==0)
    {
        send = "true";
    }
    return send;
}