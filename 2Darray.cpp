#include <iostream>
 using namespace std;
int main(){
                int **A;
                A = new int*[3];
                A[0] = new int [3];
                A[1] = new int [3];
                A[2] = new int [3];
                A[0][2] = 5 ;
                    

            cout<<A[0][2];
            delete(A);
    return 0;
}