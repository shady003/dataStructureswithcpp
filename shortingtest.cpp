#include <iostream>
using namespace std;
string shorttest(int *A, int length ){
                        for (int i = 0 ; i < length ; i++)
                                    {
                                        if ( A[i] > A[i+1])
                                                        return "false" ;
                                    }

                            return "true" ; 
}
int main(){
                    int length ;
                    cout<<"Enter the size of array\n";
                    cin>>length;
                int *ptr  = new int[length];
                for (int i = 0 ; i < length ; i++)
                            cin>>ptr[i];

                    string ca; 
                    ca= shorttest(ptr, length);
                    if ( ca == "false")
                                cout<<"List not Shorted";
                    else 
                                cout<<"List is Shorted ";




    return 0;
}