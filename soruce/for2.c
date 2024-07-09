#include <stdio.h>
int main(){
    printf("----------------------\n");
    printf("1~100까지 출력\n");
    printf("----------------------\n");
    for (int i=0; i<100;i++){
        printf("%d\n",i+1);
    }

    printf("----------------------\n");
    printf("100-1까지 출력\n");
    printf("----------------------\n");
    for (int i=100; i>0;i--){
        printf("%d\n",i+1);
    }

    printf("----------------------\n");
    printf("1~100까지 짝수 출력\n");
    printf("----------------------\n");
    for (int i=2; i<=100;i+=2){
        printf("%d\n",i);
    }

    printf("----------------------\n");
    printf("1~10까지 총합 출력\n");
    printf("----------------------\n");
    int sum =0;
    for (int i=0; i<10; i++){
        sum +=(i+1);
    }
    printf("합 : %d\n",sum);

    printf("----------------------\n");
    printf("A~F까지 출력\n");
    printf("----------------------\n");
    for (int i='A'; i<'F'+1;i++){
        printf("%c\n",i);
    }

    printf("----------------------\n");
    printf("A~F까지 중 B제외하고 출력\n");
    printf("----------------------\n");
    for (int i='A'; i<'F'+1;i++){
        if (i=='B') continue;
        printf("%c\n",i);
    }
    
    //이렇게도 가능
    // int temp =0;
    // for (int i=0 ; i<5; i++){
    //     temp =i;
    //     if (i>0) temp++;
    //     printf("%c\n",'A'+temp);
    // }
}
