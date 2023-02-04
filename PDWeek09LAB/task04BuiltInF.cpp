#include<iostream>
#include<string>
using namespace std;

/*function to convert a given int to string, break it into chars and check if any equal 7
inputs int type data which is all the input values in input array
outputs bool type data*/
bool checkNumber(int);
/*function to take inputs, insert them in checkNumber and return true if checkNumber returns true
inputs int type data which is the size of the array
outputs bool type data*/
bool ins(int);

main()
{
    
    int size;
    bool show;

    cout << "Enter the size of the array=> ";
    cin >> size;

    //to restrict the user
    if(size > 0)
    {
        show = ins(size);
        if(show == true)
        {
            cout << "Boom!";
        }
        else
        {
            cout << "There is no 7 in the array.";
        }
    }
    else
    {
        cout << "Error. Enter a valid size.";
    }
}

bool ins(int size)
{
    int input[size];
    bool check;
    bool show = false;

    for(int x = 0; x < size; x++)
    {
        // takes inputs
        cout << "Enter a number=> ";
        cin >> input[x];
    }
    for(int x = 0; x < size; x++)
    {
        // sends each input in the array to the function checkNumber
        check = checkNumber(input[x]);
        if(check == true)
        {
            show = true;
            break;
        }
    }
    return show;
}

bool checkNumber(int input)
{
    int x = 0;
    bool send = false;
    string s  = to_string(input); // converts int to string
    while(s[x] != '\0')
    {
        if(s[x] == '7')
        {
            send = true;
            break;
        }
        x++;
    }
    return send;
}