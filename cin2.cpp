/*
cin2
*/

#include <iostream>
using namespace std;
int main(){
    freopen("/Users/yisera/CODE/C/mooc_learna.txt","r",stdin);// linux下“/”貌似不用反转义
    int n,nx=0;
    while( cin >>n ){
        if( nx<n)   nx=n;
    }
    cout <<nx;
    return 0;
}