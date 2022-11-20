#include <stdio.h>
#include <stdlib.h>
struct Array {
        int * ptr;
        int length=0;
        int size = 0 ;
};
void display (struct Array arr , int n ){
    for (int i = 0 ; i < n ; i++){
        printf("%d   ",arr.ptr[i]);
                                }
}
void insert(struct Array *arr , int index ,int value){
                if (index>=arr->size||arr->length==arr->size)
                    printf("Array is full \n");
                else 
                    {   for (int i = arr->length ; i > index ; i--)
                        {
                        arr->ptr[arr->length-1]=arr->ptr[arr->length];
                        }
                        arr->length++;
                    }
};
void set(struct Array arr){
            for (int i = 0 ; i < arr.length ; i++ )
                scanf("%d",&arr.ptr[i]);
}
void append (struct Array *arr , int index , int x){
            if (index>=0 && index < arr->size){
                    arr->ptr[(arr->length)+1]= x ;
            }
}
int main(){ int index , value ;
            struct Array arr;
            printf("Enter the number of elements you want in Array :\n");
            scanf ("%d",&arr.size);
            arr.ptr=(int *)malloc(arr.size*sizeof(int));
            printf("Enter the number of you want to enter now  :\n");
            scanf("%d",&arr.length);
            set(arr);
            display(arr,arr.length);
            printf("Enter the index for shifting \n ");
            scanf("%d", &index);
            printf("Enter the value \n ");
            scanf("%d", &value);
            // insert(&arr,index,value);
            append(&arr,index,value);
            display(arr,arr.size);
            delete(arr.ptr);
    return 0;
}