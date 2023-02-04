#include<iostream>
using namespace std;

/*function to get inputs and calculate time taken
inputs int type data which is the size of the array
outputs int type data which is the time in seconds*/
int getTime(int);

main()
{
    int size;
    int time;
    
    cout << "Enter the size of the array=> ";
    cin >> size;
    
    if(size > 0)
    {
        time = getTime(size);
        cout << time;
    }
    else
    {
        cout << "Error. Enter a valid size.";
    }
}

int getTime(int size)
{
    int time;
    int count = 0;
    string colors[size];

    for(int x = 0; x < size; x++)
    {
        cout << "Enter the color of box " << x+1 << "=> ";
        cin >> colors[x];
    }
    for(int x = 0; x < size; x++)
    {
        if(colors[x] != colors[x+1] && x < size-1)
        {
            //to check how many times the color pencils were switched
            count = count + 1;
        }
    }
    // size represents boxes to be colored and count is the number of times switched between pencils
    time = size*2 + count;
    return time;
}