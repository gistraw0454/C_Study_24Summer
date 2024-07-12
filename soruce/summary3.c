#include <stdio.h>
#include <string.h>
int main() {
    //1
    int arr[5] = {0};
    int total = 0;
    int max, min;

    for (int i = 0; i < 5; i++) {
        printf("%d번째 정수 :", i + 1);
        scanf("%d", &arr[i]);
        total += arr[i];
    }

    max = arr[0];
    min = arr[0];
    for (int i = 1; i < 5; i++) {
        if (max < arr[i]) {
            max = arr[i];
        }
        if (min > arr[i]) {
            min = arr[i];
        }
    }
    printf("최소값: %d, 최대값: %d, 총합: %d\n", min, max, total);

    //2
    int arr1[8] = {0};
    int max1, min1;

    for (int i = 0; i < 8; i++) {
        printf("%d번째 정수 :", i + 1);
        scanf("%d", &arr1[i]);
    }

    max1 = arr1[0];
    min1 = arr1[0];
    for (int i = 1; i < 8; i++) {
        if (max1 < arr1[i]) {
            max1 = arr1[i];
        }
        if (min1 > arr1[i]) {
            min1 = arr1[i];
        }
    }

    printf("홀수: ");
    for (int i = 0; i < 8; i++) {
        if (arr1[i] % 2 != 0) {
            printf("%d ", arr1[i]);
        }
    }
    printf("\n짝수: ");
    for (int i = 0; i < 8; i++) {
        if (arr1[i] % 2 == 0) {
            printf("%d ", arr1[i]);
        }
    }
    printf("\n최소값: %d, 최대값: %d\n", min1, max1);


    //3
    int num=0;
    int length=0;
    int temp=0;

    printf("정수써라:");
    scanf("%d",&num);

    //자릿수 구하기
    temp=num;
    while(temp!=0){
        temp/=10;
        length++;
    }
    
    while(length!=1){
        temp=10;
        printf("%d\n",num);
        for(int i=2; i<length;i++){
            temp*=10;
        }
        num-=num/temp * temp;
        length --;
    }

    //4
    char word[30]="";
    int len =0;
    int isSame=0;

    printf("문자열 입력:");
    scanf("%s",word);

    len = strlen(word);

    for (int i=0; i<length;i++){
        if (word[i]==word[length-i-1]){
            isSame =1;
        }
        else isSame=0;
    }
    printf(isSame?"동일\n":"동일x\n");

    //5
    int year, month;
    int sum=0;
    int check=0;
    int days[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int daysOfWeek=0;
    pritnf("출력할 연도:");
    scanf("%d",&year);
    printf("출력할 달");
    scanf("%d",&month);

    if (((year%4==0)&&!(year%100==0))||(year%400==0)){
        check =1;
        days[1]++;
    }
    else{
        check =0;
    }
    sum=365;
    for (int i=1;i<year;i++){
        if(((i%4==0)&&!(i%100==0))||(i%400==0)) sum+=366;
        else sum+=365;
    }

    for (int i=0;i<month-1;i++){
        sum+=days[i];
    }
    daysOfWeek =sum%7;

    printf("sum\tmon\ttus\twed\tthu\tfri\tsat\n");
    printf("=====================================================\n");
    for (int i=0; i<daysOfWeek;i++){
        printf("\t");
    }
    for (int i=0; i<daysOfWeek;i++){
        printf("%2d\t",i+1);
        if(daysOfWeek==6){
            daysOfWeek--;
            printf("\n");
        }
        daysOfWeek++;
    }
    printf("\n");
    return 0;
}
