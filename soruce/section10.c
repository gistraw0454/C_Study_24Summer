#include <stdio.h>
int main(){
    //2
    int data=10;
    int* pdata = &data;

    printf("정수 : %d\n",*pdata);
    printf("주소 : %p\n",pdata);

    //3
    int *ptr;
    int num1=5;
    int num2=8;

    ptr = &num1;
    printf("%d\n",*ptr);

    ptr = &num2;
    printf("%d\n",*ptr);

    //4
    int n1=100, n2=200;
    int* ptr1=&n1;
    int* ptr2=&n2;
    int temp=0;

    printf("%d %d\n",*ptr1,*ptr2);

    temp = *ptr2;
    *ptr2= *ptr1;
    *ptr1= temp;

    printf("%d %d\n",*ptr1,*ptr2);



}