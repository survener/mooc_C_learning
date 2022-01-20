/*
cinget
*/

#include <iostream>
using namespace std;
int main()
{
    int c;
    while(( c=cin.get())!=EOF )
    {
        cout <<(char)c;
    }
    return 0;
}