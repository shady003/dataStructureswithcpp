#include <iostream> 
#include <stdlib.h>  
using namespace std;
int largest(int *arr, int n)
{
    int i;
     
   
    int max = arr[0];
 
   for (i = 0; i < n; i++)
        if (arr[i] > max)
            max = arr[i];
 
    return max;
}
int main(){
    //  Hashing method 

        int *ptr ; 
        int *hash ;
                cout<<"Enter the length of arr\n";
                int length ;
                cin>>length;
                ptr = (int*) malloc(length*sizeof(int));
                for ( int i = 0 ; i < length ; i++)
                            cin>>ptr[i];

                int max = largest(ptr, length);
                hash = (int*) malloc(max*sizeof(int)) = 0 ;
                for(int i = 0 ; i < max ; i++){
                                hash[i] = 0 ;


                }
               for ( int i = 0 ; i < length ; i++)
                            {
                                hash[ptr[i]]++;
                            }
                hash = (int*) malloc(max*sizeof(int));
                for(int i = 0 ; i < max ; i++){
                                if(hash[i] == 0 ){
                                    cout<<i<<endl;
                                }


                }



    return 0;
}