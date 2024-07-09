#include <stdio.h>
int main(){
    // 0 1 2 0 1 2 출력
    // 0 1 2 3 4 5 : i  => 나머지 생각하기
    // n% a: 0~ a-1 범위값을 갖는다.

    for (int i=0; i<9 ; i++){
        printf("%d ",i%3);
    }

    printf("\n");
printf("\n");
    //aBcDeFgHi......yZ 출력
    for (int i=0 ; i<26 ; i++){
        // 짝일때 소문자 홀일때 대문자
        if(i%2==0) printf("%c ",'a'+i);
        else printf("%c ",'A'+i);
    }

}