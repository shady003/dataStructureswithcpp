#include <iostream>
using namespace std;
                void insert (int * A , int index , int value , int length ){

                                        for (int i = length - 1 ; i > index ; i--)
                                                A[i] = A[i-1];

                                        A[index] = value;
                }       
int main(){
                int A[5] = {0,1,2,3,4};
                        cout<<"Before insertion\n";
                        for (int i = 0 ; i < 5 ; i++)
                                        cout<<A[i]<<" ";

                        insert (A , 2 , 5 , 5);
                        //  Printing The Array ...
                        cout<<"\nAfter insertion\n";
                        for (int i = 0 ; i < 5 ; i++)
                                        cout<<A[i]<<" ";


        return 0;
}