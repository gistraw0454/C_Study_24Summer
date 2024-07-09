#include <stdio.h>
int main(){
    char nation[6]="ko\0rea";
    printf("%s\n",nation);

    printf("%d\n",strlen(nation));
}