#include <stdio.h>
//5���� ������ �Է¹ް� �ּҰ��� �ִ��� �����ִ� �Լ�
void getMaxAndMin(int arr[],int* max,int* min){
    *max = arr[0];
    *min = arr[0];

    for (int i=1; i<5;i++){
        if (max < arr[i]) max = arr[i];
        if (min > arr[i]) min = arr[i];
    }
}
int main(){
    int arr[5]={1,2,3,4,5};
    int max=0;
    int min=0;
    getMaxAndMin(arr,max,min);
    printf("�ִ� %d",max);
    printf("�ּ� %d",min);
}

