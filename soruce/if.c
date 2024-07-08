#include <stdio.h>

void main(){

    int a, b;
    printf("두 정수를 입력하시오");
    scanf_s ("%d %d",&a,&b);

    if (a>b){
        printf("큰값 : %d",a);
    }
    else if (a==b) printf("같다");
    else printf("큰값 : %d",b);

}