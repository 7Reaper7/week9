#include<iostream>
using namespace std;

main()
{
    int number;
    float sum = 0;
    cout << "Enter the number of resistors=> ";
    cin >> number;
    float res[number];
    for(int x = 0; x < number; x++)
    {
        cout << "Enter the value of resistor " << x+1 << "=> ";
        cin >> res[x];
        sum = sum + res[x];
    }
    cout << sum << " ohms";
}