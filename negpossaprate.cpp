#include <iostream>
using namespace std;
void swap ( int * arr , int i , int j ){

                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp ;
}
int main(){

            int * arr ;
            int length ;
                cout<<"Enter the length of array :  ";
                cin>>length;
                arr = new int [length];
                for(int i = 0 ; i < length ; i++)
                            cin>>arr[i];
                            int i = 0 , j = length-1 ;
                while ( i < j ){ 
                    

                        while ( arr[i] < 0){
                            i++ ;
                        }
                        while ( arr[j]>= 0){
                            j-- ;
                        }
                        if ( i < j)
                    swap ( arr , i , j);
                }
                for(int i = 0 ; i < length ; i++)
                            cout<<arr[i]<<" ";
         


    return 0;
}