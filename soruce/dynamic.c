#include <stdio.h>
#include <stdlib.h>

int main(){

    int* dar1=0;
    int* dar2=0;
    dar1 = (int *)malloc(sizeof(int)*5);
    dar2 = (int *)calloc(5,sizeof(int)*5);   //0으로 초기화해줌
    dar2 = (int *)realloc(dar2,sizeof(int)*8);
    for (int i=0 ; i<8;i++){
        dar2[i]=i+1;
        printf("%d\n",dar2[i]);
    }
    free(dar1);
    free(dar2);
}