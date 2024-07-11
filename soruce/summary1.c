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

    printf("10진수 정수 입력:");
    scanf("%d",&jinsu);

    printf("몇진수로 ? 8은 1 16은 2");
    scanf("%d",&jinsu);

    printf(jinsu==1?"결과 : %o":"결과 : %X",num);

    //3
    int numOfPeachs =0;
    int fullBuckets=0;
    int buckets=0;

    printf("복수앙 개수:");
    scanf("%d",&numOfPeachs);

    fullBuckets = numOfPeachs/10;
    buckets =fullBuckets +(numOfPeachs%10?1:0);
    pritnf("필요한 바구니 개수:%d\n",buckets);

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

    printf("%d시간 %d분 %d초",b,m,s);


}

