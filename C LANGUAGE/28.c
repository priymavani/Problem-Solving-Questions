// 28. Write a function that takes two numbers and prints the largest one.Example:Input:number1 = 10;, Number2= 20; Output:20;

#include<stdio.h>

void largest(int num1 , int num2){
    if(num1>num2){
        printf("%d\n",num1);
    } else if(num1 == num2){
        printf("both number are equle %d\n",num1);
    }else{
        printf("%d\n",num2);
    }
}
int main(){
largest(10,20);
}