#include <stdio.h>
int main(){
char *ms = "Q. 동물이 아닌것은?";
char *choicemsg = "1.강아지\n2.고양이\n3.어묵\n";
char *resultmsg = "";

int choice =0;
int answer =4;
while(1){
    printf("%s\n%s\n",msg,choicemsg);
    scnaf_s("%d",&choice);


    if (choice ==answer){
        resultmsg = "정답";
        break;
    }else if (choice >= 1 &&choice<=4) {
        resultmsg = "오답";
        break;
    }
    else
    {
        resultmsg = "다시";
    }
    printf("%s\n",resultmsg);
    if (choice==answer)break;
    
}

}