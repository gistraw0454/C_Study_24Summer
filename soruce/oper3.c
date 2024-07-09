#include <stdio.h>

int main(){
    int data =10;
    
    printf("%d\n",data++);  //둘다 써도될땐 후위형이 좋음
    printf("%d\n",data);
    
    data=10;

    printf("%d\n",++data);
    printf("%d\n",data);
}