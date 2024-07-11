#include <stdio.h>
int main(){

//1
    int end=0;
    int total;
    scanf("%d".&end);

    for (int i=0; i<end;i++){
        total += i+1;

    }

    printf("total sum ; %d",total);


    //2
    for (int i=0; i<100;i++){
    if ((i+1)%6==0)printf("%d",i+1);
    }

    //3
    char inputC=' ';

    while(1){
        scanf("%c",&inputC);
        if(inputC>='A'&&input<='Z') {
        printf("대문자");
        break;
        }
        else printf("소문자");
    }




}
