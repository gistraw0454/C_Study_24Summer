#include <stdio.h>
int main(){
    
    //2 �밢���� O�� ������ �����
    char bingo[3][3]={"",};

    for (int i=0; i<3;i++){
        for (int j=0; j<3;j++){
            if (i==j) bingo[i][j]='O';
            else bingo[i][j]='X';
        }
    }
    
    for (int i=0; i<3;i++){
        for (int j=0; j<3;j++){
            printf("%c",bingo[i][j]);
        }
        printf("\n");
    }


    //2
    char gugu[4][9]={"",};
    for (int i=0; i<4;i++){
        for (int j=0; j<9;j++){
            gugu[i][j]=(i+2)*(j+1);
        }
    }

    for (int i=0; i<4;i++){
        for (int j=0; j<9;j++){
            printf("%d ",gugu[i][j]);
        }
        printf("\n");
    }


}