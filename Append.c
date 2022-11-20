#include <stdio.h>
#include <stdlib.h>
struct Array {
    int *arr;
    int size;
    int length;

};
        void display(struct Array t1){
            printf("\nThe size of array is %d \n",t1.length);
            printf("The values are:\n");
            for (int i=0;i<t1.length;i++)
                        printf("%d\n",t1.arr[i]);
        }
    void append(struct Array *ap1 , int value){ if (ap1->size>ap1->length){
                                        ap1->arr[(ap1->length)] = value ;
                                        ap1->length++;
                                        }
                                        else{
                                            printf("\nSorry Dear the array is full\nThe old elements are:\n");
                                        }
    }
    // Insert function
    void insert(struct Array *i1 , int index , int value){
                                    if (i1->size>i1->length){
                            for (int i = i1->length ; i = index ; i--){
                                i1->arr[i] = i1->arr[i-1];
                            }
                                    i1->arr[index] = value ;
                                    i1->length++;
                                    }
                                    else {
                                        printf("Sorry No more space \n");
                                    }
    }
int main(){ struct Array a1; int ap , i , in , index ;
                        // all the variable are decleared above ...
                printf("\nEnter size of array\n");
                scanf("%d",&a1.size);
                a1.arr = (int *) malloc(a1.size*sizeof(int));
                printf("\nHow much values you want to enter\n");
                scanf("%d",&a1.length);
                for(i=0;i<a1.length;i++)
                            scanf("%d",&a1.arr[i]);
                display(a1);
                printf("\nEnter the value to append\n");
                scanf("%d",&ap);
                append(&a1,ap);
                display(a1);
                printf("\nTime to enter value in between Enter index and value respectively\n");
                scanf("%d",&index);
                scanf("%d",&in);
                insert(&a1,index,in);
                display(a1);
    return 0;
}
