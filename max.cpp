#include <iostream>
using namespace std;
int Max(int x, int y)
{
    if( x>y ){
        return x;
    }else
        return y;
}

int main()
{
    int n,m;
    cin >>n >>m;
    cout  <<"最大值：" <<Max(n,m) <<endl;
    return 0;
}

