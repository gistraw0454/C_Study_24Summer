#include <stdio.h>
int main(){
    int arr[2][3]={0,};
    for (int i=0; i<2; i++){
        for (int j=0; j<3;j++){
            arr[i][j]=5;
        }
    }


    for (int i=0; i<2; i++){
        for (int j=0; j<3;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}