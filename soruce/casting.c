#include <stdio.h>

void main(){
    //() 안에있는게 최우선 연산
    // ()는 단항 연산자로 뒤에 항이 하나만 나오는거임.
    // 단항 다음 산술이 연산됨.
    printf("%.2lf\n",(int)8.43 + 2.59);    //10.59
    printf("%d\n",(int)(8.43+2.59));

    //문자형변환
    printf("%d\n",'A'+1);
    printf("%c\n",'A'+1);
}