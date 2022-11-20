#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
void swap(int * a , int * b ){
            int temp = 0 ;
            *a = temp ;
            *a = *b ;
            *b = temp;
}
void display(int* arr, int n){
                for (int i = 0 ; i < n ; i++)
                    cout<<arr[i]<<" ";
}
int linearSearch(int *arr, int size , int key){   
            for (int i = 0 ; i< size ; i++){
                if (arr[i]==key){
                    swap(arr[i] ,arr[i-1]);
                        return i ;
                        }
            }
            return -1 ;
}
int main() {
    int size  , key  ;
   int * arr ;
   cout<<"Enter the size of Array :\n";
   cin>>size;
   arr = (int *) malloc(size*sizeof(int));
   printf("Enter the Elemnts \n");
        for (int i = 0 ; i < size ; i++){
               cout<<i<<":  "; cin>>arr[i];
               }
    cout<<"Enter the key to Search \n";
    cin>>key;
        int index = linearSearch(arr , size , key);
        if (index == -1 ){
                cout<<"Invalid Search\n";
                }
        else {
                cout<<"For "<<key<<" Index is :  "<<index<<endl;
                }
                display(arr,size);
    return 0;
}