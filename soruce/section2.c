#include <stdio.h>
int main(){
    //1
    printf("������ ���� :������ �ڷ���\n");
    printf("���α׷� �ۼ��� :ȫ�浿\n");
    printf("���α׷� �ۼ��� :2021.02.23\n");

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
