#include <stdio.h>
int main(){

    //1
    int arrdata[5]={10,20,30,40,50};
    int* ptr = &arrdata[0];

    for (int i=0; i<5;i++){
        printf("%d ",ptr+i);
    }
    printf("\n");

    //2
    int total=0;
    int arr[8]= {1,2,3,4,5,6,7,8};
    int* Ptr = &arr[7];
    for (int i=7;i>=0; i--){
        if (*(ptr+i)%2)
        total += *(ptr+i);
    }
    printf("배열 요소 중 홀수의 총합은 %d",total);

    //3
    int Arr[8]={1,2,3,4,5,6,7,8};
    int* forward = &arr[0];
    int* backward = &arr[7];

    int temp=0;
    for (int i=0; i<4;i++){
        temp = *(forward+i);
        *(forward+i) = *(backward-i);
        *(backward-i)=temp;
    }

    for (int i=0; i<8;i++){
            printf("%d",arr[i]);
    }

}