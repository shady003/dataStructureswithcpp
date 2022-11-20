#include <iostream>
#include <stdlib.h>
using namespace std;
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
int BinarySearch(int *arr, int low , int high , int key){   
                                int mid  = (low+high)/2;
                while (low <= high )
                            {
                                if (arr[mid] == key ){
                                                swap(arr[mid] , arr[mid-1]);
                                                return mid;

                                                }
                                else if (arr[mid]<key)
                                        low = mid + 1;
                                        else 
                                            high = mid - 1;
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
        int index = BinarySearch(arr , 0 , size , key);
        if (index == -1 ){
                cout<<"Invalid Search\n";
                }
        else {
                cout<<"For "<<key<<" Index is :  "<<index<<endl;
                }
                display(arr,size);
                
    return 0;
}