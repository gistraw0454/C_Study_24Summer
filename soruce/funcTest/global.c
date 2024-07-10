#include "global.h"

extern int num1;
extern int num2;

void main(){
    add();
    printf("%d",num3);  //얘는 헤더파일을 추가했기때문에, static변수를 자기꺼 처럼 쓸 수 있다.
}