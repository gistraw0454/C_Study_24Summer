#include <stdio.h>
int main(){
    //배열은 주소하나를 가리키는것으로 값을 못바꾸는데 포인터는 가능
    const char* fruit = "apple";
    fruit = "banana";   //이걸 막으려면 char * const fruit 으로 선언하면 값을 못바꾸게 할 수있다.
    printf("%s",fruit);

    //*fruit = 'c'; const라는게 암묵적으로 존재하니까 직접 접근 참조 불가
    printf("%s",fruit);

}