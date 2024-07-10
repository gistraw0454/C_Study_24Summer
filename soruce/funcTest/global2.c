#include <stdio.h>
extern int num1;
extern int num2;
//extern int num3; 다른파일에 있는 정적변수는 extern 키워드로 추가할 수 없음.

void main(){
    printf("%d,%d",num1,num2);
}