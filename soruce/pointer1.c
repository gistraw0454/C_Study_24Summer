#include <stdio.h>
void func(int* data);
int main(){
    int data =10;
    func(&data);
    printf("%d",data);

}

void func(int* data){
    *data =20;
}