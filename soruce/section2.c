#include <stdio.h>
int main(){
    //1
    printf("오늘의 주제 :변수와 자료형\n");
    printf("프로그램 작성자 :홍길동\n");
    printf("프로그램 작성일 :2021.02.23\n");

    //2
    printf("%d\n",sizeof(int)); //4
    printf("%d\n",sizeof(char));    //1
    printf("%d\n",sizeof(short));   //2
    printf("%d\n",sizeof(50));  //4
    printf("%d\n",sizeof(float));   //4
    printf("%d\n",sizeof(3.14));    //8


    //3
    float f1 = 3.14F;
    float f2 = (flaot)3.14;
}
