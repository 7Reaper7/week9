#include<iostream>
using namespace std;

main()
{
    string name[4] = {"quarters", "dimes", "nickels", "pennies"};
    float change[4];
    float item;
    float mul = 0.25;
    float sum = 0;
    for(int x = 0; x < 4; x++)
    {
        cout << "Enter the amount of " << name[x] << " you have=> ";
        cin >> change[x];
        sum = sum + change[x]*mul;
        if(x == 0)
        {
            mul = 0.10;
        }
        else if(x == 1)
        {
            mul = 0.05;
            
        }
        else if(x == 2)
        {
            mul = 0.01;
        }
    }
    cout << "Enter the price of the item=> ";
    cin >> item;
    if(sum - item >= 0)
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }
}