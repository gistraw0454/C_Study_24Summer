#include <stdio.h>
#include <string.h>
struct Animal {
    char name[200];
    int age;
    char feed[200];
};

int main(){
    //struct Animal dog ={"Max",10,"gum"};
    struct Animal dog;
    //dog.name="Max"; ºÒ°¡´É
    strcpy_s(dog.name,sizeof(dog.name),"max");
    dog.age = 20;
    strcpy_s(dog.feed,sizeof(dog.feed),"gum");
    printf("%s %d %s",dog.name,dog.age,dog.feed);
}