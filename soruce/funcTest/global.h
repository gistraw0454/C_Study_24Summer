#include <stdio.h>
int num1=10;
int num2=20;
static int num3 =30;   //�� ���ϳ������� ����Ҽ�����.
// header file�� c���� �̰� include �ϰ��ֱ⋚����, c������ �νİ���.

void add(){
    printf("%d",num1+num2);
}

void sub(){
    printf("%d",num1-num2);
}