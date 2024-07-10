#include <stdio.h>
int main(){
    int data =10;
    int* pdata = &data;
    printf("%d\n",*pdata);
    *pdata =20;
    printf("%d\n",data);
}