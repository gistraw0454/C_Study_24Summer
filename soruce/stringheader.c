#include <stdio.h>
#include <string.h>

int main(){
    char nation[6]="korea";
    //nation = "japan"; 배열은 포인터 상수인데, 다른 시작주소값으로 바꾸려하면 오류발생
    
    //1 입력한 값 출력하기
    scanf_s("%s",nation,sizeof(nation));
    printf("%s\n",nation);

    //2 japan을 기존값에 넣고 출력하기
    strcpy_s(nation,sizeof(nation),"japan");
    printf("%s\n",nation);

    //3 nation과 japan, china 비교하기
    printf("%d\n",strcmp(nation,"japan"));
    printf("%d\n",strcmp(nation,"china"));

    //4 입력받은값과 korea와 비교하기
    scanf_s("%s",nation,sizeof(nation));
    if (!strcmp(nation,"korea")) printf("같다");
    
}