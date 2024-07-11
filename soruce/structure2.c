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
    // F apple = {"사과",1500,"가을"};
    // F pear = {"배",3500,"겨울"};
    // F banana = {"바나나",500,"여름"};

    // printf("%s %d %s",apple.name,apple.price,apple.season);


    //(2)
    // F fruits[L] ={
    //     {"사과",1500,"가을"},
    //     {"배",3500,"겨울"},
    //     {"바나나",500,"여름"}
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