#include <stdio.h>
#include <string.h>
int main(){
    char title[20]="♨CAFE♨";
    char menu[100]="1. 추가하기\n2. 수정하기\n3. 검색하기\n4. 삭제하기\n5. 목록보기\n6. 나가기\n";
    //메뉴명, 메뉴 가격
    char arrname[200][100]={"",};   //최대 200개의 메뉴를 담을 수 있다. 100자의 메뉴명 가능
    int arrprice[200]={0,};
    char temp[100]="";
    int choice=0;
    int cnt=0;
    int isDup=1;
    int foundIdx=0;
    while (1){
        printf("%s\n%s\n",title,menu);
        scanf_s("%d",&choice);
        if (choice ==6)break;   //나가기

        switch(choice){
            case 1: //추가하기
                printf("메뉴 이름 :");
                scanf_s("%s",temp,sizeof(temp));
                isDup = 0;
                for(int i=0; i<cnt; i++){   //겹치는 이름있는지 확인
                    if (!strcmp(temp,arrname[i])) isDup=1;
                    break;
                }
                
                if(!isDup){ //안겹치면
                    printf("메뉴 가격 :");
                    scanf_s("%d",arrprice+cnt);
                    strcpy_s(arrname[cnt],sizeof(arrname[cnt]),temp);
                    cnt ++;
                }
                else printf("이미 존재하는 상품\n");
                break;
            case 2: //수정하기
                printf("수정하실 기존 상품 명:");
                scanf_s("%s",temp, sizeof(temp));
                isDup = 0;
                for (int i=0; i<cnt;i++){
                    if (!strcmp(temp,arrname[i])){
                        isDup =1;
                        foundIdx =i;
                        break; //존재하면 현재 for 문 나가기
                    }
                }

                if (isDup) {
                    printf("수정하실 새로운 상품명 : ");
                    scanf_s("%s",temp,sizeof(temp));
                    isDup = 0;
                    for(int i=0; i<cnt; i++){   //겹치는 이름있는지 확인
                        if (!strcmp(temp,arrname[i])) isDup=1;
                        break;
                    }
                    if(!isDup){
                    printf("상품 가격:");
                    scanf_s("%d",arrprice+foundIdx);
                    strcpy_s(arrname[foundIdx],sizeof(arrname[foundIdx]),temp);
                    }
                    else printf("이미 존재하는 상품\n");
                }
                else printf("수정할 상품이 존재하지 않음\n");
                
                break;
            case 3: //검색하기
                printf("검색하실 상품명 입력:");
                scanf_s("%s",temp,sizeof(temp));
                for (int i=0; i<cnt;i++){
                    if (!strcmp(temp,arrname[i])){
                        printf("%s(%d원)\n",arrname[i],arrprice[i]);
                        isDup=1;
                        break;
                    }
                    
                }
                if (!isDup){
                    printf("검색하신 상품이 없습니다");
                }
                break;
            case 4: //삭제하기
                printf("삭제하실 상품명 입력:");
                scanf_s("%s",temp,sizeof(temp));
                for (int i=0; i<cnt;i++){
                    if (!strcmp(temp,arrname[i])){
                        isDup=1;
                        foundIdx=i;
                        break;
                    }
                }
                if(isDup){
                    for (int i=foundIdx;i<cnt;i++){
                        if (i==199){
                        strcpy_s(arrname[i],sizeof(arrname[i]),"");
                        }
                        else
                            strcpy_s(arrname[i],sizeof(arrname[i]),arrname[i+1]);
                        cnt--;
                    }
                }
                else{
                    printf("검색하신 상품이 없습니다");
                }
                break;
            case 5: //목록보기
                printf("상품명(가격)\n");
                for (int i=0; i<cnt;i++){
                    printf("%s(%d원)\n",arrname[i],arrprice[i]);
                }
                if (cnt==0) printf("상품 없음\n");
                break;
        }
    }

}