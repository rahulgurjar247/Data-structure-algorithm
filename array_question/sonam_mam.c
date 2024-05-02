// guys its a wrong question isme kuch confussion ho gaya   
#include<stdio.h>
#include<conio.h>
void main(){
    int arr[5],n,item,i;
    printf("enter size of an array");
    scanf("%d",&n);

    printf("enter element of array");
    scanf("%d",&item);

    for(i=0;i<n;i++){
        printf("value of arr");
        scanf("%d",&arr[i]);
    }

    n++;

    for(i=n;i>=1;i--){
        arr[i-1] = arr[i-2];
        arr[0] = item;
    }

    for(i=0;i<n;i++){
        printf("\n %d",arr[i]);
    }
    getch();
}