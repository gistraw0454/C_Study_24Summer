#include <stdio.h>
int main(){

    int arr[]={3,5,1,9,7};
    int length = sizeof(arr)/sizeof(int);   //5


    for (int i=0; i<length;i++){
        arr[i]=5-i;
    }


    for (int i=0; i<length;i++){
        printf("%d ",arr[i]);
    }

    

    printf("\n%p\n",arr);
    printf("%p\n",&arr[0]);
    printf("%p\n",&arr[1]);
    printf("%d\n",sizeof(arr));
    printf("%d\n",*(arr+2));
    printf("%d\n",*(arr+4));
}