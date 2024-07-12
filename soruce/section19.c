#include <stdio.h>
struct coffee{
    char origin[30];
    char barista[30];
    int price;
};

//2
struct worker{
    char name[30];
    char phone[30];
    int salary;
};
//3
typedef struct worker{
    char name[30];
    char phone[30];
    int salary;
}WORKER;
//****************** */
void main(){
    //1
    struct worker person;
    scanf("%s",person.name);
    scanf("%s",person.phone);
    scanf("%d",&person.salary);
    printf("%s, %s, %d",person.name,person.phone,person.salary);

    //2
    WORKER persons[3] ={0,};

    for (int i=0; i<3;i++){
        scanf("%s",persons[i].name);
        scanf("%s",persons[i].phone);
        scanf("%d",&persons[i].salary);
        printf("%s, %s, %d",persons[i].name,persons[i].phone,persons[i].salary);
    }


}