/*
函数判断是否为素数
*/

#include <iostream>
using namespace std;
bool IsPrime(unsigned int n)
{
    if( n<=1 )
        return false;
    for( int i=2; i<n; i++)
        if( n%i== 0)
            return false;
    return true;
}
int main()
{
    cout <<IsPrime(2) <<"," <<IsPrime(4) <<"," <<IsPrime(5);
    return 0;
}