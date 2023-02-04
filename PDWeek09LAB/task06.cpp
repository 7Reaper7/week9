#include<iostream>
#include<string>
using namespace std;

/*function to take inputs, add and subtract 2 to each input that is odd and even respectively n times
inputs int type data that is the size of the array*/
void transform(int);
/*function to check whether a input string is an integer value or not
inputs string type data
output bool type data*/
bool checkInt(string);
/*function to check whether a input string is zero and positive or not
inputs string type data
outputs int type data which is either the amount of iteration or -1*/
int checkItt(string);

main()
{
    int size;
    cout << "Enter the size of the array=> ";
    cin >> size;
    //to restrict the user
    if(size > 0)
    {
        transform(size);
    }
    else
    {
        cout << "Error. Enter a valid length of the array.";
    }
}

void transform(int size)
{
    string inputS[size];
    int input[size];
    string IterS;
    bool stop = false;
    bool check;
    int iter;

    for(int x = 0; x < size; x++)
    {
        // takes inputs
        cout << "Enter a number=> ";
        cin >> inputS[x];
        //to restrict the user from entering non integers
        check = checkInt(inputS[x]);
        if(check == false)
        {
            stop = true;
            break;
        }
        input[x] = stoi(inputS[x]); //converts each entered string to int and stores in seperate array
    }
    if(stop == false)
    {
        cout << "Enter the number of times tranformation is to be done=> ";
        cin >> IterS;
        iter = checkItt(IterS);
        // so iterations cant be less than 0 or non integers
        if(iter >= 0)
        {
            for(int x = 1; x <= iter; x++)
            {
                for(int x = 0; x < size; x++)
                {
                    if(input[x]%2==0)
                    {
                        //for even integers
                        input[x] = input[x] - 2;
                    }
                    else
                    {
                        //for odd integers
                        input[x] = input[x] + 2;
                    }
                }
            }
            for(int x = 0; x < size; x++)
            {
                cout << input[x] << " ";
            }
        }
        else
        {
            cout << "Error. Enter a positive number.";
        }
    }
    else
    {
        cout << "Error. Enter valid numbers.";
    }
}

bool checkInt(string input)
{
    int x=0;
    bool send = true;

    while(input[x] != '\0')
    {
        if(input[x] != '-' && input[x] != '0' && input[x] != '9' && input[x] != '8' && input[x] != '7' && input[x] != '6' && 
        input[x] != '5' && input[x] != '4' && input[x] != '3' && input[x] != '2' && input[x] != '1')
        {
            send = false;
        }
        x++;
    }
    return send;
}

int checkItt(string input)
{
    int x=0;
    bool check = true;
    int send;

    while(input[x] != '\0')
    {
        if(input[x] != '0' && input[x] != '9' && input[x] != '8' && input[x] != '7' && input[x] != '6' && 
        input[x] != '5' && input[x] != '4' && input[x] != '3' && input[x] != '2' && input[x] != '1')
        {
            check = false;
        }
        x++;
    }
    if(check == true)
    {
        send = stoi(input);
    }
    else
    {
        send = -1;
    }
    return send;
}