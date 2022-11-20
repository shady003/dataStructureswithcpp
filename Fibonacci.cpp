#include <iostream>
using namespace std;
int fibo(int n){
        int n0 = 0 , n1 = 1 , num ;
    if (n<=1)
        return n ;
    else 
    {
        for(int i = 0 ; i <= n ; i++){
                num = n0+n1;
                n0=n1;
                n1=num;
                cout<<num<<endl;
        }
        return 0;
    }
}
int main(){
             fibo(5);
    return 0 ;
}
