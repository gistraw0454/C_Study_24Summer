#include <stdio.h>
#include <stdlib.h>

void getMaxAndMin(int* dAr,int size, int* max, int* min){
    *max = dAr[0];
    *min = dAr[0];
    for (int i=0; i<size; i++){
        if (*max <dAr[i]) *max = dAr[i];
        if (*min >dAr[i]) *min = dAr[i];
    }
}

int main(){
    int size = 0;
    int max = 0, min =0;
    int* dAr =0;

    printf("정수개수 : ");
    scanf("%d",&size);

    dAr = (int*)calloc(size,sizeof(int));

    for (int i=0; i<size; i++){
        printf("%d 번째 정수 : ",i+1);
        scanf("%d",dAr+i);
    }

    getMaxAndMin(dAr, size, &max, &min);

    printf("최대값 : %d\n",max);
    printf("최소값 : %d\n",min);
}
