// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
// void display(){
//             cout<<"function testing";
    
// }
int pow(int m , int n){
    if(n==0){
        return 1 ;
                }
    else if (n%2==0){
        return pow(m*m,n/2);
    }
    else
    {
        return m* pow(m*m,(n-1)/2);
    }
}
int fact (int n ){
        if (n==0||n==1){
            return 1;
        }
        else
     return (n * fact(n-1));
 }
 
int main() {
    
//   display();
    cout<<pow(2,3);
    cout<<fact(3);
    return 0;
}