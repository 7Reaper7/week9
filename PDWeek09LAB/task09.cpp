#include<iostream>
using namespace std;

int digits[4];

/*function to check whether a given string is a positive integer and 4 digits or not
inputs string type data
outputs bool type data*/
bool checkItt(string);
/*funtion to take an input string(4 digit positive integer), break it down into seperate digits and store
inputs string type data*/
void storeDigits(string);

main()
{
    string MOVES[10] = {"Shimmy", "Shake", "Pirouette", "Slide", "Box Step", "Headspin", "Dosado", "Pop", "Lock", "Arabesque"};
    string pin;
    int show;
    bool check;

    cout << "Enter a pin=> ";
    cin >> pin;
    check = checkItt(pin);
    //to prevent data other than 4 digits positive integere to be entered
    if(check == true)
    {
        storeDigits(pin);
        for(int x = 0; x < 4; x++)
        {
            show = digits[x]+x; // adds the index of the digit to its value
            if(show > 9)
            {
                // for value greater equal to 10, the value resets and starts from 1
                show = show % 10;
            }
            cout << MOVES[show] << " ";
        }
    }
    else
    {
        cout << "Invalid input.";
    }
}

bool checkItt(string input)
{
    int x=0;
    bool send = true;

    while(input[x] != '\0')
    {
        // checks for 0 or positive integers
        if(input[x] != '0' && input[x] != '9' && input[x] != '8' && input[x] != '7' && input[x] != '6' && 
        input[x] != '5' && input[x] != '4' && input[x] != '3' && input[x] != '2' && input[x] != '1')
        {
            send = false;
        }
        x++;
    }
    if(x != 4)
    {
        // checks for 4 digits
        send = false;
    }
    return send;
}

void storeDigits(string pin)
{
    int digit;
    int div = 1000;
    int yes;

    yes = stoi(pin); // converts string to integer
    for(int x = 0; x < 4; x++)
    {
        //breaks and stores each digit seperately
        digit = yes/div;
        digit = digit % 10;
        digits[x] = digit;
        div = div / 10;
    }
}