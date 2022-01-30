#include <iostream>
using namespace std;
int F(int n)
{
    if(n<2)
        return 1;
    else
        return n*F(n-1);
}
int main()
{   
    int n;
    cout <<"求阶乘，输入数字：";
    cin >>n;
    cout <<F(n);
    return 0;
}

