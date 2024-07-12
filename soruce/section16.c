#include <stdio.h>
#include <stdlib.h>
//1
int getDiffByValue(int num1, int num2){
        int result =0;
        result = num1-num2;
        result = result>=0?result:result*-1;
        return result;
    }
void callDiffByAddr(int* num1, int* num2){
    int temp=0;
    if (*num1<*num2){
        temp = *num1;
        *num1=*num2;
        *num2=temp;
    }
}

//2
void swapNumbers(int* num1, int* num2, int* num3){
    int temp= *num3;
    *num3=*num2;
    *num2=*num1;
    *num1=temp;
}

//3 Àç±ÍÇÔ¼ö
int recursive(int n){
    if (n==0) return 0;
    return n + recursive(n-1);
}

int main(){

    int randNum=rand();
    for (int i=0; i<5;i++){
        printf("%d\n",randNum%10);
        randNum=rand();
    }
    


}