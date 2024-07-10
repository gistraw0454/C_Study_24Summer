#include <stdio.h>
int main(){
    // 반복문을 한번만 사용하여 구구단 1~9단 출력
    for (int i=0; i<81; i++){
        printf("%d*%d=%d\n",i/9+1,i%9+1,(i/9+1)*(i%9+1));
    }

    // 이중 for 문
    for (int i=0; i<10; i++){
        for (int j=0; j<10; j++){
            printf("%d*%d=%d\n",i,j,i*j);
        }
    }

}

