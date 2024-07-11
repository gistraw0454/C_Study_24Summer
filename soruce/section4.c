#include <stdio.h>
int main(){

    //2
    for (int i=0; i<4 ;i++){
        for (int j=i; j<3;j++){
            printf(" ");
        }
        for (int j=0; j<=i*2;j++){printf("*");}
        printf("\n");
    }

    //3
    int number=0;
    printf("값을 입력하시오 :");
    scanf("%d",&number);
    printf("%d\n",number);

}



