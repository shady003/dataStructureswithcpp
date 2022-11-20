#include <iostream>
using namespace std;
 void show(int A[],int n){
     for (int i = 0 ; i<n ; i++)
     cout<<A[i];

 }
int main(){     int num;
    cout<<"Enter the number of elements you want is array...\n";
                cin>>num;
                int A[num];
                for (int i = 0 ; i < num ; i++){
                    cin>>A[i];
                }
                show(A,num);
                system("pause > 0");
return 0;
}