#include <stdio.h>

void display(int A[] , int n){  
                for (int i= 0 ; i< n ; i++){
                        printf("%d   ",A[i]);
                }
                }
int delete(int *A[], int index ,int length){
                            int x = 0 ;
                    if (index >= 0 && index < length){ x = A[index];
                                    for (int i = index ; i<length ; i++)
                                                A[i] = A[i+1];
                                                return x ;
                                                }
                                                return x ;
}
int main(){
                int A[5] = {0,1,2,3,4};
                int x = delete(&A , 3 , 5);
                display(A,5);
    return 0;
}