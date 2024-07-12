#include <stdio.h>
#include <string.h>
int main(){

    // //1
    // char val1[30];
    // char val2[30];

    // gets(val1);
    // gets(val2);
    // if (!strcmp(val1,val2))printf("같다\n");
    // else printf("다르다\n");

    //2
    char val1[30];
    char val2[30];

    gets(val1);
    gets(val2);

    if (strlen(val1)>=strlen(val2)) printf("%s\n%s\n",val1,val2);
    else printf("%s\n%s\n",val2,val1);

    //3
    char val3[50];

    printf("문자열:");
    gets(val3);
    int total=0;
    for (int i=0; i<strlen(val3);i++){
        if (val3[i]>=48&&val3[i]<=57) total+=val3[i]-48;
    }
    printf("합: %d\n",total);

}