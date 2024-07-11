#include <stdio.h>
int main(){
    //1
    int age = 0;
    int pricr = 0;
    scanf_s("%d",&age);
    price = age >=20? 1250:800;
    printf("당신의 나이는 %d 살이며, 요금은 %d 입니다.",age,price);

    //2
    int Age,Height=0;
    int canRide =0;
    printf("나이를 입력해라");
    scanf_s("%d",&Age);
    printf("키를 입력해라");
    scanf_s("%d",&Height);

    canRide = Age >=12 && Height >=120;
    printf(canRide ? "탈수있다.":"탈수없다");

}
