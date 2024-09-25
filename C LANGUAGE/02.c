
// 2. Write a function to determine whether a given number is positive, negative, or zero.

#include <stdio.h>
void numberis(float num){
    if(num>0){
        printf("positive");
    }else if(num == 0){
    printf("Zero")   ; 
    
    }else{
        printf("Negative");
    }
}
int main() {

numberis(-2.5);
    return 0;
}