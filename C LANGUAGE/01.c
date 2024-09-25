
// 1. Write a function to check the grade of a student based on the score:
// 90-100: A
// 80-89: B
// 70-79: C
// 60-69: D
// Below 60: F


#include <stdio.h>
void score(int marks){
    if(marks>=90 && marks<=100){
        printf("Gread A");
    }else if(marks>=80 && marks<=89){
        printf("Gread B");
    }else if(marks>=70 && marks<=79){
        printf("Gread C");
    }else if(marks>=60 && marks<=69){
        printf("Gread D");
    }else if(marks>=0 && marks<60){
        printf("Gread F");
    }
}

int main() {
  score(80);
 
}

