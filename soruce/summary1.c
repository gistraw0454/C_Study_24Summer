#include <stdio.h>
int main(){
    //1
    int NUM1, NUM2=0;
    printf("NUM1 :");
    scanf("%d",&NUM1);
    printf("NUM2 :");
    scanf("%d",&NUM2);

    printf("%d&&%d=%d\n",NUM1,NUM2,NUM1&&NUM2);

    //2
    int num1=0;
    int jinsu=0;

    printf("10���� ���� �Է�:");
    scanf("%d",&jinsu);

    printf("�������� ? 8�� 1 16�� 2");
    scanf("%d",&jinsu);

    printf(jinsu==1?"��� : %o":"��� : %X",num);

    //3
    int numOfPeachs =0;
    int fullBuckets=0;
    int buckets=0;

    printf("������ ����:");
    scanf("%d",&numOfPeachs);

    fullBuckets = numOfPeachs/10;
    buckets =fullBuckets +(numOfPeachs%10?1:0);
    pritnf("�ʿ��� �ٱ��� ����:%d\n",buckets);

    //4
    int num=0;
    printf("num :");
    scanf("%d",&num);

    printf("%d",num%10);

    //5
    int second;
    int h,m,s;
    printf("second:");
    scanf("%d",&second);

    h = second/(60*60);
    m = second%(60*60)/60;
    s = second%60;

    printf("%d�ð� %d�� %d��",b,m,s);


}

