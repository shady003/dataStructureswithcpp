#include <iostream>
using namespace std;
int main() {
    // // Write C++ code here
    // std::cout << "Hello world!";
        int A[2][2][2][2];
        for (int i=0;i<2;i++)
            for(int j=0;j<2;j++)
                for(int k=0;k<2;k++)
                    for(int l=0;l<2;l++)
                            cin>>A[i][j][k][l];
        // for (int i=0;i<1;i++)
        //     for(int j=0;j<1;j++)
        //         for(int k=0;k<1;k++)
        //             for(int l=0;l<1;l++)
        //                     cout<<A[i][j][k][l]<<endl;
    return 0;
}