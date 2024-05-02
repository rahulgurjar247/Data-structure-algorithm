#include<stdio.h>
#include<conio.h>

int main(){
    int size=5;
    int *arr = (int*)malloc(size* (sizeof(int)));

    if(arr == NULL){
        printf("array not succesful");
        return 1;
    }
    
    printf("Enter array value:" );
    for(int i=0; i<size;i++){
        scanf("%d",&arr[i]);        
    }

    for(int j=0; j<size;j++){
        printf("%d\n", arr[j]);
    }

    size++;

    arr = (int*)realloc(arr,size * (sizeof(int)));

    int elem;
    printf("enter element you want to add");
    scanf("%d",&elem);

    for(int i=size-1;i>=1;i--){
        arr[i] =arr[i-1];
    }   

    arr[0] = elem;

    printf("Array values after insertion:\n");
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    free(arr);
    return 0;

}