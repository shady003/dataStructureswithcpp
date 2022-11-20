#include <iostream> 
using namespace std;
        int * merge( int * A , int * B , int length , int length2 ){

                    int * ptr = new int[length+length2];
                    int i , j , k ;
                    i = j = k = 0 ;
                    while (i<length && j < length2){
                    if(A[i] < B[j])
                        ptr[k++] = A[i++];
                    else
                        ptr[k++] = B[j++];
                        }
                    for ( ; i < length ; i++){
                        ptr[k++] = A[i];
                    }
                    for (; j < length2 ; j ++){
                        ptr[k++] = B[j];
                    }
                    return ptr ;
        }

int main(){
                int length_1 , length_2 ;
                cout <<" Enter the length of first array : ";
                cin>>length_1;
                int * arr_1 , * arr_2 ;
                arr_1 = new int[length_1];
                cout << " Enter the Elements of First Array : \n";
                for ( int i  = 0 ; i < length_1 ;   i ++)
                                cin>>arr_1[i];
                cout<<" Enter the length of Second array :  ";
                cin>>length_2;
                arr_2 = new int[length_2];
                cout << " Enter the Elements of Second Array : \n";
                for ( int i = 0 ;  i < length_2 ; i++)
                        cin>>arr_2[i];
                int * ptr  = merge (arr_1 , arr_2 , length_1 , length_2 );

                int k = length_1 + length_2 ;
                for ( int i = 0 ; i < k ; i++ ){

                                cout<<ptr[i]<<" ";
                }


                





    return 0 ;
}