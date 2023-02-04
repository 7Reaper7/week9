#include<iostream>
using namespace std;
/*function to check at which index the input exist in the array of fruit names(if it exists)
inputs string type data taken from user
outputs the index value of the matching input or -1 in case of no match*/
int fruitPrice(string);

main()
{
    
    int amount;
    int flag;
    string checkFruit;
    int price[4] = {60, 70, 40, 30};

    cout << "Enter the name of the fruit=> ";
    cin >> checkFruit;
    
    flag = fruitPrice(checkFruit);
    //to validate only when the input has a match
    if(flag >=0)
    {
        cout << "Enter the amount of fruit in kgs=> ";
        cin >> amount;
        if(amount >= 0)
        {
            cout << "the total price is=> " << amount*price[flag];
        }
        else
        {
            cout << "Error. Enter valid amount";
        }
    }
    else
    {
        cout << "Fruit not found.";
    }
}

int fruitPrice(string checkFruit)
{
    int flag=-1;
    string fruit[4] = {"peach", "apple", "guava", "watermelon"};
    for(int x=0; x < 4; x++)
    {
        if(checkFruit == fruit[x])
        {
            //checks if the input matches any fruit in the index and assign it to the returning variable
            flag = x;
            break;
        }
    }
    return flag;
}