#include <stdio.h>
#include <string.h>

int main(){
    //1 ��հ��
    int arr[5]={2,5,3,2,1};
    int total = 0;
    double avg = 0.0;

    for (int i=0;i<5;i++){
        total +=arr[i];
    }
    avg = total/5.0;

    printf("avg: %f\n",avg);

    //2 ���ڸ� �Ųٷ� ���
    int length=0;
    char word[30]="";
    printf("���ܾ� �Է�:");
    scanf_s("%s",word,sizeof(word));

    length=strlen(word);

    for (int i=0; i<length;i++){
        printf("%c",word[length-1-i]);
    }

    //3 
    char words[30]="";
    int lengths=0;
    printf("���ܾ� �Է�");
    scanf_s("%s",words,sizeof(words));

    int max=0;
    max = word[0];
    lengths = strlen(lengths);
    for (int i=0; i<lengths;i++){
        if (max <word[i]) max = word[i];
    }
    printf("�ƽ�Ű�ڵ��� ���� ū ���� %c",max);

    
    
    }