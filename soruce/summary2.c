#include <stdio.h>
#include <conio.h>  //getch
int main(){
    // //1
    // for (int i=100; i<201; i++){
    //     if (i%3==0||i%7==0) printf("%d",i);
    // }

    // //2
    // int start =0, end=0;
    // int dan=0, value=0;

    // scanf("%d",&start);
    // scanf("%d",&end);

    // int temp=0;
    // if (start>end){
    //     temp=start;
    //     start= end;
    //     end=temp;
    // }

    // for (dan=start;dan<=end;dan++){
    //     for (value=0; value<9; value++){
    //         printf("%d",dan*(value+1));
    //     }
    // }

    // printf("\n");

    // //3 ** �Ҽ� ���ϱ� **
    // int n=2;    //2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20  
    // int count=0;//0 1 2 2 3 3 4 4 4  4  5  5  6  6  6  6  7  7  8
    // while(count!=10){   //10���� ���Ұ���.
    //     for (int i=2;;i++){
    //         if (i==n){
    //         printf("%d ",n);
    //         count++;
    //         break;
    //         }
    //         else {
    //             if(n%i==0) break;   //������ �������°� �����ϸ� �׳� n�� �÷���
    //         }
    //     }
    //     n++;
    // }


    //4
    int num1 , num2=0;
    char sign=' ';

    printf("��1 :");
    scanf("%d",&num1);
    // %c�� ������ �����ִ� \n�� �ޱ� ������, 
    printf("������ :");
    sign=getch();
    printf("��2 :");
    scanf("%d",&num2);

    switch(sign){
        case '+': 
            printf("%d %c %d = %d\n",num1, sign,num2, num1+num2);
        case '-': 
            printf("%d %c %d = %d\n",num1, sign,num2, num1-num2);
        case '*': 
            printf("%d %c %d = %d\n",num1, sign,num2, num1*num2);
        case '/': 
            printf("%d %c %d = %d\n",num1, sign,num2, num1/num2);
    }

    //5 fibo
    int count =0;
    int one =1, two=1;
    int next=0;

    printf("����:");
    scanf("%d",&count);

    for (int i=0; i<count;i++){
        printf("%d",one);
        next = one +two;
        one=two;
        two=next;
    }

}