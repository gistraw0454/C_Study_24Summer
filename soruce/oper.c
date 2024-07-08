#include <stdio.h>

void main(){
// 두 정수를 입력하고 대소 비교하기
    int a=0, b=0;
    int result =0;
    char* msg1 ="첫번째 정수: ";
    char* msg2 ="두번째 정수: ";
    
    int condition1 = 0, condition2 =0;
    char* format ="";


    printf("%s",msg1);
    scanf_s("%d",&a);

    printf("%s",msg2);
    scanf_s("%d",&b);
    
    printf("1.\n");
    condition1 =a>b;
    condition2 = a==b;

    format = condition2 ? "%s" : "더 큰 값 : %d";

    printf(format, condition1 ? a :
     condition2 ? "두 수가 같다": b);


    printf("\n2.\n");
    // result = a > b ? a:b; //a>b 에 a or b가 들어간다.
    // printf("%d",result);

    a > b ? printf("더 큰 값 : %d",a):
        a == b ? printf("같다") : printf("더 큰 값 : %d",b);
}