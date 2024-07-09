#include <stdio.h>
int main(){
//1~100 까지 배열에 담은 후 홀수만 출력
int arr[100]={0,};
for (int i=0; i<100; i++){
    arr[i]=i+1;
    if ((i+1)%2==0) continue;
    printf("%d ",arr[i]);
}
//1~100 까지 배열에 담은 후 짝수의 합 출력
int arr2[100]={0,};
int sum=0;
for (int i=0; i<100; i++){
    arr2[i]=i+1;
    if ((i+1)%2==0) sum+=arr2[i];
}
printf("\ntotal : %d\n",sum);

//A~F 중 C제외하고 배열에 담은 후 출력
char arr3[5] = { ' ' ,};
//0 1 2 3 4 
//+65
//A B C D E 에서 C를 D로, D를 E로, E를 F로 바꿔주면 편하다.
for (int i=0; i<5; i++){
    arr[i]= i>1? 65+i+1: 65+i;
    printf("%c ",arr[i]);
}

//5개의 정수를 받고 최대값과 최소값 구하기
int arr4[5]={0, };
int max=0;
int min=0;

for (int i=0; i<5;i++){
    printf("%d번째 정수 : ",i+1);
    scanf_s("%d",arr4+i);
}
max = arr4[0];
min = arr4[0];
for (int i=1; i<5; i++){
    max= max < arr4[i] ? arr4[i] :max;
    min= min > arr4[i] ? arr4[i] :min;
}
printf("최대값 : %d\n최소값 : %d\n",max,min);

//aBcD...yZ 배열에 담기 짝수일때 소문자 , 홀수일때 대문자
char arr5[26]={' ',};
for (int i=0; i<26;i++){
    arr5[i]= i%2==0 ? 'a'+i:'A'+i;
    printf("%c",arr5[i]);
}


}

