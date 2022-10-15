/*
Given 3 numbers N , L and R. Print 'yes' if N is between L and R else print 'no'.
*/

#include <iostream>
using namespace std;
int main()
{
    int key;
    cin >> key;

    int s ,e;
    cin >> s >> e ;
    for(int i =s;i<=e;i++)
    {
        if(i == key)
        {
            cout << "yes";
            break;
        }
        else if (i==e&&i!=key)
        {
            cout << "no";
        }
    }
    return 0;
}