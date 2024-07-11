#include <stdio.h>
int main(){
    //2
    int num=0;
    scanf("%d",&num);
    printf("%d´Â %s",num,num%2 ==0?"Â¦¼ö":"È¦¼ö");


    //3
    int age=0;
    scanf("%d",&age);
    if (age>=6&&age<13) printf("500¿ø");
    else if (age>=13 && age<19) printf("900¿ø");
    else if (age>=19&&age<65)printf("1200¿ø");
    else printf("¹«·á");

    //4
    int kor =88,eng=90, math=58, soc=81,sci=72;
    int total = kor + eng+math+soc+sci;
    int average = total/5;
    char grade =' ';

    switch (average/10){
case 10: case 9 :
    grade = 'A';
    break;
case 8 :
    grade = 'B';
case 7 :
    grade = 'C';
case 6 :
    grade = 'D';
default :
    grade ='F';
    }

    printf("%c",grade);
}
