#include <iostream>
using namespace std;
int e(int n , int y){
    static int p = 1 , f = 1 ; 
    int r ;
    if (y==0){
        return 1;
    }
    else {
        r = e(n , y-1);
        p = p*n;
        f = f*y;
        return r + p/f;
    }
}

int main()
{
    cout<<e(1,10);
    return 0;

}