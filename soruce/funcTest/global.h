#include <stdio.h>
int num1=10;
int num2=20;
static int num3 =30;   //이 파일내에서만 사용할수있음.
// header file로 c에서 이걸 include 하고있기떄문에, c에서도 인식가능.

void add(){
    printf("%d",num1+num2);
}

void sub(){
    printf("%d",num1-num2);
}