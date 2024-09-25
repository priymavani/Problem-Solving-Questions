// 5. Write a function that checks if a person is eligible to vote. The person is eligible if they are 18 years old or older.

#include <stdio.h>

void elgible(int age){
    if(age>=18){
        printf(" eligible to vote");
    }else{
        printf(" not eligible to vote");
    }
}
int main() {
    elgible(18);

    return 0;
}