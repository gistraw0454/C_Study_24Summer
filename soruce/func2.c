#include <stdio.h>
//1~10 ���� print�� ���
void OneToTen(){
    for (int i=0; i<10;i++){
        printf("%d\n",i+1);
    }
}
//1~10 ���� �ձ��ϱ�
int SumOneToTen(){
    int sum =0;
    for (int i=0; i<10;i++){
        sum += (i+1);
    }
    return sum;
}
//1~n���� �ձ��ϱ�
int SumOneToN(int n){
    int sum =0;
        for (int i=0; i<n;i++){
            sum += (i+1);
        }
    return sum;
}
//Ȧ���� ¦���� �ٲ��ִ� �Լ�
int change(int num){
    return ++num;
}
//5���� ������ �Է¹ް� �ּҰ��� �ִ��� �����ִ� �Լ�
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