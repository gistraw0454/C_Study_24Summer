#include <stdio.h>

int main(){
    char* qmsg = "당신의 혈액형은?";
    char* choicemsg = "1.A\n2.B\n3.O\n4.AB\n";
    char* amsg= "예민";
    char* bmsg= "둔함";
    char* omsg= "활발";
    char* abmsg= "찌질";
    char* errormsg = "에러";
    
    int choice = 0;

    char* resultmsg ="";

    printf("%s\n%s\n",qmsg,choicemsg);
    scanf_s("%d", &choice);
    
    if(choice==1){
        resultmsg = amsg;
    }
    else if(choice==2){
        resultmsg = bmsg;
    }
    else if(choice==3){
        resultmsg = omsg;
    }
    else if(choice==4){
        resultmsg = abmsg;
    }
    else resultmsg = errormsg;

    printf("%s",resultmsg);
}