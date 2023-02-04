#include<iostream>
using namespace std;

/*function to check at which index the input exist in the array of movie names(if it exists)
inputs string type data taken from user
outputs the index value of the matching input or -1 in case of no match*/
int movieDiscount(string);

main()
{
    
    int flag;
    string checkMovie;
    float discount;

    cout << "Enter the name of the Movie=> ";
    cin >> checkMovie;
    //index value of the matching string or -1 is stored in flag
    flag = movieDiscount(checkMovie);
    
    if(flag >=0)
    {
        if(flag%2==0)
        {
            //for even values of the index 10% discount
            discount = 500 - (500 * 0.1);
        }
        else
        {
            //for odd values of the index 5% discount
            discount = 500 - (500 * 0.05);
        }
        cout << "Your payable amount is=> " << discount;
    }
    else
    {
        cout << "Movie not found.";
    }
}

int movieDiscount(string checkMovie)
{
    int flag=-1;
    string movies[5] = {"Gladiator", "StarWars", "Terminator", "TakingLives", "TombRider"};
    for(int x=0; x < 5; x++)
    {
        if(checkMovie == movies[x])
        {
            flag = x;
            break;
        }
    }
    return flag;
}