# 17강 - 제어문 - 반복문 for문 예제 및 실습 1

```c
printf("----------------------\n");
    printf("A~F까지 중 B제외하고 출력\n");
    printf("----------------------\n");


//1
    for (int i='A'; i<'F'+1;i++){
        if (i=='B') continue;
        printf("%c\n",i);
    }


//2
    int temp =0;
    for (int i=0 ; i<5; i++){
        temp =i;
        if (i>0) temp++;
        printf("%c\n",'A'+temp);
    }
```