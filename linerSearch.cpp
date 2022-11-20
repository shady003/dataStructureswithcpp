#include <iostream>
using namespace std; 
        struct Array {
                    int * ptr ;
                    int size  ;
        };
   void  setArray(struct Array *arr ){
            for (int i = 0 ; i < arr->size ; i++){
                    cin>>arr->ptr[i];
                    }
    }
   void display(struct Array arr){
                        for ( int i = 0 ; i<arr.size ; i++)
                        cout<<arr.ptr[i]<<"  ";
   }
   int linearSearch(struct Array arr, int key ){
                    for (int i = 0 ; i < arr.size ; i++)
                            {
                                if (arr.ptr[i] == key)
                                    return i;
                                    else {
                                    }
                            }
                            return -1 ;
   }
int main(){   int key , index ; 
              struct Array arr ; 
              cout<<"Enter size of Array you want \n";
              cin>>arr.size; 
              cout<<"Enter Element One by One \n";
              setArray(&arr);
              display(arr);
              cout<<"\nEnter key To Search \n";
              cin>>key;
              index = linearSearch(arr , key ); 
              if (index == -1){
                cout<<"Not Found";
              }
              else {
                    cout<<index;
              }
    return 0;
}