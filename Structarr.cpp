#include <stdio.h>
#include <stdlib.h>
struct Array{
    int *ptr;
    int size = 0 ;
    int length = 0 ;
};
void display(struct Array arr, int n){
    // int n;
    for (int i = 0 ; i < n ; i++)
        printf("%d\n",arr.ptr[i]);
}
int main(){
                            int num ;
                struct Array arr ;
                printf("Enter the Number of Entements you wnat to enter \n");
                scanf("%d",&num);
                arr.length = num ;
                arr.ptr = (int*) malloc(num*sizeof(int));
                printf ("Number of Elemnts you wnat to enter of %d \n" , num);
                printf("Enter the Elements one by one \n");
                for(int i = 0 ; i < num ; i ++){
                    scanf("%d",&arr.ptr[i]);
                    }
                printf("Printing the Elements \n");
                //  Trevesing the array by fun display
                display(arr,num);
                delete(arr.ptr);
    return 0;
}