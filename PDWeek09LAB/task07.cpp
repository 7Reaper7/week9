#include<iostream>
using namespace std;

string s1,s2;
/*function to get the length of a given string(didnt use var.length())
inputs string type data
outputs int type data which is the length of string*/
int getLength(string);
/*function to check the count of common characters between two strings
inputs two int type data which is the string lengths
outputs int type data which is the count of common characters between two strings*/
int checkCommon(int, int);

main()
{
    int s1len, s2len;
    int count = 0;
    cout << "Enter string 1=> ";
    getline(cin, s1);
    cout << "Enter string 2=> ";
    getline(cin, s2);
    
    s1len = getLength(s1);
    s2len = getLength(s2);
    
    count = checkCommon(s1len, s2len);
    cout << count;
}

int getLength(string input)
{
    int x=0;
    while(input[x] != '\0')
    {
        x++;
    }
    return x;
}

int checkCommon(int s1len, int s2len)
{
    int count = 0;
    for(int y = 0; y < s1len; y++)
    {
        for(int x = 0; x < s2len; x++)
        {
            if(s1[y]==s2[x])
            {
                s2[x] = -1; //when found a match, the matching char in second string becomes -1 so it wont match again on the next run of outer loop
                count++;
                break;
            }
        }
    }
    return count;
}