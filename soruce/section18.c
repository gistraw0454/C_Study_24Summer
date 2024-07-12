#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){

    //1
    char* s1="Take a look!";
    char* s2=(char*)malloc(strlen(s1)+1);

    strcpy(s2,s1);

    printf("%s\n",s2);
    if(s2!=NULL){
        free(s2);
    }

    //2
    int arr[5]={10,20,30,40,50};
    int* pa;
    int* pb;
    int* pc;
    int i;

    pa = (int *)malloc(sizeof(arr));
    for(i=0;i<5;i++){
        pa[i] = arr[i];
    }

    pb = (int*)calloc(pa[3],sizeof(int));
    pc = (int*)realloc(NULL,pa[4]);

    //3
    char* str=0;
    int length=0;
    int count=0;
    scanf("%d",&length);
    str = (char*)malloc(sizeof(char)*length);
    scanf("%s",str);

    for (int i=0; i<length;i++){
        if (str[i]==NULL) break;
        if (str[i]=='a') count++;
    }
    printf("%d",count);

}