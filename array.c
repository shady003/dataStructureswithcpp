#include <stdio.h>
#include <stdlib.h>
struct Array{
        int *arr;
        int size;
        int length;
};
void Display(struct Array t1){
            for (int i = 0 ; i < (t1.length)-1 ; i++)
                printf("%d",t1.arr[i]);
}
void Append(struct Array *t1, int value){


                    *t1.arr[(t1.length)] = value ;
                    *t1.length++;
                    

}
int main(){
            struct Array a1;
            printf("\nEnter the size of array\n");
            scanf("%d",&a1.size);    
            a1.length = 0 ;
            a1.arr =(int*)malloc(a1.size*sizeof(int));
            printf("\nEnter the Values use . to exit\n");
            int i = 0 ;   
            while (a1.arr[(a1.length)-1]!=101||a1.length == a1.size){
                        scanf("%d",&a1.arr[a1.length]);
                        a1.length++;
            }
            int a = 5 ;
            Append(&a1,a);
           Display(a1);
    return 0;
}