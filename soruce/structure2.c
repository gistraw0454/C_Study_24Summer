#include <stdio.h>
#include <stdlib.h>
#define L 3

typedef struct fruit{
    char name[200];
    int price;
    char season[200];
}F;

int main(){
    //(1)
    // F apple = {"���",1500,"����"};
    // F pear = {"��",3500,"�ܿ�"};
    // F banana = {"�ٳ���",500,"����"};

    // printf("%s %d %s",apple.name,apple.price,apple.season);


    //(2)
    // F fruits[L] ={
    //     {"���",1500,"����"},
    //     {"��",3500,"�ܿ�"},
    //     {"�ٳ���",500,"����"}
    // };

    // for (int i=0; i<L;i++){
    //     printf("%s %d %s",fruits[i].name,fruits[i].price,fruits[i].season);
    // }

    
    //(3)
    F* fruits=0;
    int size=0;
    printf("fruits num?");
    scanf("%d",&size);

    fruits = (F*)calloc(size,sizeof(F));

    for (int i=0; i<L;i++){
        printf("%d name, price, season: ",i+1);
        scanf("%s",fruits->name);
        scanf("%d",&fruits[i].price);
        scanf("%s",fruits->season);
        printf("%s %d %s\n",fruits->name,fruits[i].price,fruits->season);
    }

}