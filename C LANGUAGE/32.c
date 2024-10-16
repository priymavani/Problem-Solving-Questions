// 32.Write a program that categorizes a person’s age group based on the given age:
// Less than 13: "Child"
// Between 13 and 19: "Teenager"
// Between 20 and 59: "Adult"
// 60 and above: "Senior"


#include<stdio.h>

int main (){
    int year = 65;

    if(year <13){
        printf("child");
    }
    else if(year >= 13 && year <= 19 ){
        printf("Teenager");
    }
    else if(year >=20 && year <= 59){
        printf("Adult");
    }
    else{
        printf("Senior");
    }
}
