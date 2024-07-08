#include <stdio.h>

void main(){
    char* qmsg = "당신의 혈액형은?";
    char* choicemsg = "1.A\n2.B\n3.O\n4.AB\n";
    char* amsg= "예민";
    char* bmsg= "둔함";
    char* omsg= "활발";
    char* abmsg= "찌질";
    char* errormsg = "에러";
    int choice = 0;

    int condition1,condition2,condition3,condition4;
    printf("%s\n%s\n",qmsg,choicemsg);
    scanf_s("%d", &choice);
    
    condition1 = choice ==1;
    condition2 = choice ==2;
    condition3 = choice ==3;
    condition4 = choice ==4;

    printf("%s\n",condition1 ? amsg:
        condition2? bmsg:
        condition3? omsg:
        condition4? abmsg:errormsg );

}