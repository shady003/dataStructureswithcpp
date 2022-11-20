#include <iostream>
using namespace std;
int main(){
                int size = 0 , i , j; 
                cout<<"Enter the size of Array \n";
                cin>>size;
                int * ptr = new int [size];
                for(int i = 0 ; i < size ; i++)
                    cin>>ptr[i];
                for (  i = 0 ,  j = size-1 ; i<=j ; i++ , j--)
                {
                    int temp = ptr[i];
                    ptr[i]= ptr[j];
                    ptr[j] = temp;
                }
                for(int i = 0 ; i < size ; i++)
                        cout<<ptr[i]<<" ";




    return 0;
}