#include <iostream>
using namespace std;
int pow(int m, int n) {
			if (n == 0)
				return 1;
			else if (n % 2 == 0)
				return pow(m * m, n / 2);
			else
				return m * pow(m * m, (n - 1) / 2);
		}
int pow2(int m, int n){

    if (n==0)
        return 1;
    else
        return pow2(m,n-1)*m;
}
int main(){
                int a , b;
                cout<<"Enter the number"<<endl;
                cin>>a;
                cout<<"Enter the power"<<endl;
                cin>>b;
                cout<<pow2(a,b);
    return 0;
}
