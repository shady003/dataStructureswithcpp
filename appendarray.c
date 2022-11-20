#include <stdio.h>
#include <stdlib.h>
struct Array{
            int * ptr ;
            int size ;
            int length ;
};
void set(struct Array *arr ,int length){
            for (int i = 0 ; i < length ; i++)
                scanf("%d" , &arr->ptr[i]);
}
void display(struct Array arr , int length){   //for transversing  the array ...
                for (int i= 0 ; i< length ; i++){
                        printf("%d   ", arr.ptr[i]);
                }
}
void append (struct Array *arr , int value){
            if ( arr->length != arr->size ){

                            arr->ptr[arr->length]= value ;
                            arr->length++;

            }


}
int main(){ struct Array arr ;
            printf("Enter the size of array\n");
            scanf("%d",&arr.size);
            arr.ptr = (int *) malloc(arr.size * sizeof(int));
            printf("element to fill \n");
            scanf("%d",&arr.length);
            set(&arr,arr.length);
            display (arr,arr.length);
            int index , value ;
            printf("Note : the indexing starts  from 0 :::: \n append\n");
           
            printf("value: \n");
            scanf("%d",&value);
                    append(&arr,index , value);
            display(arr,arr.length);

    return 0;
}