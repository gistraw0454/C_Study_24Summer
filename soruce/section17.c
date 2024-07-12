//함수 포인터 사용
#include <stdio.h>
int FirstFunc(int a, int b);
double SecondFunc(double d);
void ThirdFunc(char* c);
int main(){

    //3
    int (*first)(int ,int)=0;
    double (*second)(double)=0;
    void (*third)(char)=0;
    first = FirstFunc;
    second = SecondFunc;
    third = ThirdFunc;


}

int FristFunc(int a, int b){
    return 0;
}
double SecondFunc(double d){
    return 0.0;
}
void ThirdFunc(char* c){
    ;
}