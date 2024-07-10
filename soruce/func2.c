#include <stdio.h>
//1~10 까지 print로 출력
void OneToTen(){
    for (int i=0; i<10;i++){
        printf("%d\n",i+1);
    }
}
//1~10 까지 합구하기
int SumOneToTen(){
    int sum =0;
    for (int i=0; i<10;i++){
        sum += (i+1);
    }
    return sum;
}
//1~n까지 합구하기
int SumOneToN(int n){
    int sum =0;
        for (int i=0; i<n;i++){
            sum += (i+1);
        }
    return sum;
}
//홀수를 짝수로 바꿔주는 함수
int change(int num){
    return ++num;
}
//5개의 정수를 입력받고 최소값과 최댓값을 구해주는 함수
int* getMaxAndMin(int arr[]){
    int max = arr[0];
    int min = arr[0];

    for (int i=1; i<5;i++){
        if (max < arr[i]) max = arr[i];
        if (min > arr[i]) min = arr[i];
    }
    int maxmin[2]={max,min};
    return maxmin; 
}

int main(){
    OneToTen();
    SumOneToTen();
    SumOneToN(9);
    change(2);
    int arr={1,2,3,4,5};
    getMaxAndMin(arr);
}