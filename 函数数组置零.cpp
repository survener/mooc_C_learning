/*
数组作为形参数值改变
*/

#include <iostream>
using namespace std;
int a1[4]={4,15,6,9};
void SetToZero(int a[], int length)
{
    for(int i=0; i<length; i++)
        a[i]=0;
}
int main()
{
    SetToZero(a1,4);
    for(int i=0; i<4; i++)
        cout <<a1[i] <<",";
    return 0;
}