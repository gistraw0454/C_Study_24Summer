#include <stdio.h>
#include <string.h>

int main(){
    //1 평균계산
    int arr[5]={2,5,3,2,1};
    int total = 0;
    double avg = 0.0;

    for (int i=0;i<5;i++){
        total +=arr[i];
    }
    avg = total/5.0;

    printf("avg: %f\n",avg);

    //2 글자를 거꾸로 출력
    int length=0;
    char word[30]="";
    printf("영단어 입력:");
    scanf_s("%s",word,sizeof(word));

    length=strlen(word);

    for (int i=0; i<length;i++){
        printf("%c",word[length-1-i]);
    }

    //3 
    char words[30]="";
    int lengths=0;
    printf("영단어 입력");
    scanf_s("%s",words,sizeof(words));

    int max=0;
    max = word[0];
    lengths = strlen(lengths);
    for (int i=0; i<lengths;i++){
        if (max <word[i]) max = word[i];
    }
    printf("아스키코드중 가장 큰 문자 %c",max);

    
    
    }