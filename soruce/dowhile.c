#include <stdio.h>

int main(){

    const char* qmsg = "당신의 혈액형은?";
    const char* choicemsg = "1.A\n2.B\n3.O\n4.AB\n0.나가기\n";
    const char* amsg= "예민";
    const char* bmsg= "둔함";
    const char* omsg= "활발";
    const char* abmsg= "찌질";
    const char* errormsg = "에러";

    const char* resultmsg = "";

    int choice = 0;

    printf("%s\n%s\n",qmsg,choicemsg);
    scanf_s("%d", &choice);

do{
    switch(choice){
        case 1:
            resultmsg = amsg;
            break;
        case 2:
            resultmsg = bmsg;
            break;
        case 3:
            resultmsg = omsg;
            break;
        case 4:
            resultmsg = abmsg;
            break;
        default:
            resultmsg = errormsg;
    }
    if(choice==0) puts("다시 시도해주세요");
    puts(resultmsg); //이걸로 /n를 자동 출력
}while (choice !=0);
}