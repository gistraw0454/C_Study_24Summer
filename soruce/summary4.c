#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define L 5
void asc(int arr[]){
    int temp=0;
    for (int i=0; i<L-1;i++){
        for (int j=0; j<L;j++){
            if (arr[i]>arr[j]) {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}

void dec(int arr[]){
    int temp=0;
    for (int i=0; i<L-1;i++){
        for (int j=0; j<L;j++){
            if (arr[i]<arr[j]) {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}

char * strcpy_custom(char* dest, char* origin){
    char* result = dest;
    while(*origin!='\0') {
        *dest = *origin;
        dest++;
        origin++;
    }
    *dest = '\0';
    return result;
}
int main(){

    srand((unsigned int)time(NULL));
    int randNum = rand()%10+1;
    int choice =0;
    while(1){
        scanf("%d",&choice);
        if (choice ==randNum) printf("정답\n");
        else printf("오답\n");
    }
    //3
    //4
    char str[80]="good";
    printf("전 %s\n",str);
    strcpy_custom(str,"bad");
    printf("후 %s\n",str);
    //5
    int arr[L]={3,5,2,8,9};
    asc(arr);
    for (int i=0; i<L;i++) printf("%d",arr[i]);

    //5
    int arr2[L]={3,5,2,8,9};
    dec(arr2);
    for (int i=0; i<L;i++) printf("%d",arr2[i]);
    
}

