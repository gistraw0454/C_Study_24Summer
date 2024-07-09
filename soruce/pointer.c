#include <stdio.h>

int main(){
    int data =10;
    int *Pdata = &data;
    printf("%p\n",&data);
    printf("%p\n",Pdata);
    printf("%d\n",*Pdata);
    printf("%p\n",Pdata+1);

    }