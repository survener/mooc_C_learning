#include <iostream>
using namespace std;
#define row 10
#define col 10
int a[row][col];
int main()
{
    for( int i=0; i<row; i++ ){
        for( int j=0; j<col; j++ )
            cout <<a[i][j] <<" ";
        cout <<endl;
    }
    return 0;
}

