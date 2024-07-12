#include <stdio.h>
//1
typedef struct{
    char name[30];
    int age;
    double height;
}PERSON;

//2
typedef struct{
    int xpos;
    int ypos;
}Point;

void swapPoint(Point* ptr1,Point* ptr2){
    Point temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

//3
typedef struct{
    Point leftTop;
    Point rightBottom;
}Rect;

void printfRectArea(Rect rect){
    int width = rect.rightBottom.xpos - rect.leftTop.xpos;
    int height = rect.rightBottom.ypos - rect.leftTop.ypos;

    printf("사각형의 넓이는 %d\n",width*height);
}

int main(){
    //1
    PERSON person={"손오공",30,180.35};
    PERSON* ptr = &person;

    printf("이름: %s\n나이 : %d\n신장: %0.2f\n",ptr->name,ptr->height);

    //2
    Point position1 = {3,6};
    Point position2 = {4,9};

    swapPoint(&position1,&position2);
    printf("position1 : %d %d\n",position1.xpos,position1.ypos);
    printf("position2 : %d %d\n",position2.xpos,position2.ypos);

    //3
        Rect rect = {
            {0,0},
            {10,10}
        };
    printfRectArea(rect);

}