#include <stdio.h>
int main(){
    //1
    int age = 0;
    int pricr = 0;
    scanf_s("%d",&age);
    price = age >=20? 1250:800;
    printf("����� ���̴� %d ���̸�, ����� %d �Դϴ�.",age,price);

    //2
    int Age,Height=0;
    int canRide =0;
    printf("���̸� �Է��ض�");
    scanf_s("%d",&Age);
    printf("Ű�� �Է��ض�");
    scanf_s("%d",&Height);

    canRide = Age >=12 && Height >=120;
    printf(canRide ? "Ż���ִ�.":"Ż������");

}
