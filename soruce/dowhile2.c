#include <stdio.h>
int main(){

    char * msg = "문의 번호 고르시오";
    char * choicemsg = "1. 분실신호\n2. 번호이동\n3. 신규가입\n4. 상담원 연결\n";
    char * resultmsg = "";

    int choice =0;

    do{
        printf("%s\n%s\n",msg,choicemsg);
        scanf_s("%d",&choice);

        switch (choice){
            case 1: case 2 : case 3:
            printf("안녕하세요\n");
            break;
        }
    }while (choice !=0);
}