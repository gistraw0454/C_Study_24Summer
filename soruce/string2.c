#include <stdio.h>
int main(){
    char fruit[6]="";   //"": 빈문자열
    printf("과일 이름:");
    scanf_s("%s",fruit,sizeof(fruit));  //size넘으면 안드감
    printf("%s 는 맛있어",fruit);

}