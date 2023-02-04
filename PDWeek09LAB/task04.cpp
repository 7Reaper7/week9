#include<iostream>
#include<string>
using namespace std;

/*funtion to check the digits of a number, seperate them and check if any equal 7
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
    int check = 9;
    int mul = 1;
    int digit;
    int digit_mod;
    int x;
    bool send = false;

    for(x = 1; x <= 9; x++)
    {
        //checks how many digits a given input has
        if(input <= check)
        {
            break;
        }
        else
        {
            check = check * 10 + 9;
        }
    }
    for(int y = 1; y <= x; y++)
    {
        //breaks those digits down one by one and checks if any equal 7 
        digit = input / mul;
        digit_mod = digit % 10;
        mul = mul * 10;
        if(digit_mod==7)
        {
            //if even a single digit of a number is 7 the loop ends because thats all we need
            send = true;
            break;
        }
    }
    return send;
}