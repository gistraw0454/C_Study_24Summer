#include <stdio.h>
int main(){
    //1~10 까지 배열에 담고 출력
    int arr[10]={0,};

    for (int i=0; i<10;i++){
        arr[i]=i+1;
        printf("%d",arr[i]);
    }

    //10~1까지 중 짝수만 배열에 담고 출력
    int arr2[5]={0,};
    for (int i=0; i<5; i++){
        arr[i]=(i+1)*2;
        printf("%d",*(arr+i));
    }

}