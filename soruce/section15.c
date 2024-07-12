#include <stdio.h>

void arthmetic(int num1, int num2){
    printf("ÇÕ %d\n",num1+num2);
    printf("»­ %d\n",num1-num2);
    printf("°ö %d\n",num1*num2);
    printf("³­ %d\n",num1/num2);
}

void getTotal(int start, int end){
    int total=0;
    for (int i=start+1;i<end;i++){
        total+=i;
    }
    printf("ÃÑÇÕ : %d\n",total);
}

void getCountOfSeven(int num){
    int count=0;
    for (int i=num+1; i<num+200;i++){
        if(i%7==0) count++;
    }
    printf("7°³¼ö %d\n",count);
}

void changeToMeter(int cm){
    double result =0.0;
    result= (double)cm/100;
    printf("°á°ú %.2f\n",result);
}

void printTime(int second){
    int h=0,m=0,s=0;
    h=second/3600;
    m=(second%3600)/60;
    s=second%60;
    printf("%d½Ã°£ %dºÐ %dÃÊ\n",h,m,s);
}
int main(){

//1
arthmetic(6,3);
//2
getTotal(5,9);
//3
getCountOfSeven(100);
//4
changeToMeter(181);
//5
printTime(3615);

}