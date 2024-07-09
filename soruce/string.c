#include <stdio.h>
int main(){
//apple
char fruit[6]={'a','p','p','l','e'};    //한칸 더 주면 자동으로 null이 들어간다.
char fruit2[6]="apple";

printf("%s",fruit); //시작주소를 주면 그냥 쭉 읽어버린다. 어디까지 읽어라는 표시가 없어서
printf("%s",fruit2);
}