#include<iostream>
using namespace std;

//declared globally so the array can be used in multiplte functions
string slot[4];

//function to take inputs in the slot variable array
void inputSlots();
/*funtion to check if the four inputs are equal or not
outputs int type data which acts as a flag*/
int checkSame();

main()
{
    int check;
    inputSlots();
    check = checkSame();
    if(check == 3)
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }
}

void inputSlots()
{
    for(int x = 0; x < 4; x++)
    {
        cout << "Enter Value(s) for slot " << x+1 << "=> ";
        cin >> slot[x];
    }
}
int checkSame()
{
    int y = 0;
    string check;
    for(int x = 0; x < 3; x++)
    {
        check = slot[x+1];
        if(slot[x] == check) //starts from the first input and checks in pairs if the it is equal to the next input
        {
            y++;
        }
    }
    return y;
}