#include <stdio.h>
int main(){

//1~10까지 중 4까지만 출력
    for (int i=0; i<10;i++){
        printf("%d ",i+1);
        if (i==3) break;
    }

//1~10까지 중 4만 제외하고 출력
    for (int i=0; i<10;i++){
        if (i==3) continue;
        printf("%d ",i+1);
    }

}