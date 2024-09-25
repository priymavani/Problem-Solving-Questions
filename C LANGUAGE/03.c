// 3. Write a function that takes three sides of a triangle and checks whether the triangle is equilateral, isosceles, or scalene

#include <stdio.h>
void triangle(int side1,int side2,int side3){
    if(side1 == side2 && side2 == side3){
        printf("equilateral Triangle");
    }else if(side1 != side2 && side2 != side3){
        printf("Scalene Triangle");
    }else{
        printf("Isosceles Triangle");
    }
}
int main() {
    
triangle(25,25,10);
    return 0;
}