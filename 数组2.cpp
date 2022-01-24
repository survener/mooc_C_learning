#include <iostream>
#include <string>
using namespace std;
string a[]={"Illegal","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
int main()
{
    int n;
    cin >>n;
    if( n>7 || n<1 )
        cout <<a[0];
    else 
        cout <<a[n] <<endl;
}

