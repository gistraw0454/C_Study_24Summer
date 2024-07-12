#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//1
int* createArr(int* arr,int num, int length){
    int* pDAr = (int*)malloc(sizeof(int)*length);
    int i=0,j=0;
    while(i<length +1){
        if(arr[j]<num){
            pDAr[i++]=arr[j++];
        }
        else{
            if (pDAr[i-1]==num||pDAr[i-1]>num){
                pDAr[i++] =arr[j++];
            }
            else pDAr[i++] =num;
        }
    }
    return pDAr;
}

//2
void swap(int* arr1,int* arr2, int length){
    int temp=0;
    for (int i=0; i<length;i++){
        temp =arr1[i];
        arr1[i]=arr2[i];
        arr2[i]=temp;
    }
}

int main(){
    //1
    int arr[3] ={1,5,7};
    int length=3;
    int num=3;
    int* pDAr=0;
    pDAr= createAr(arr,num,length);
    for(int i=0;i<length+1;i++){
        printf("%d",pDAr[i]);
    }

    //2

}