#include <stdio.h>

int main(){

    int arr[2][3]={{2,3,4},{5,6,7}};
    for (int i=0; i<6;i++){
        printf("%d",arr[i/3][i%3]);
    }

}