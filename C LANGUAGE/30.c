// 30. Write a program to input an integer 'n' and print the sum of all its even digits and the sum of all its odd digits separately. Example : Input: 'n' = 132456, Output: 12, 9
// Explanation:
// The sum of even digits = 2 + 4 + 6 = 12
// The sum of odd digits = 1 + 3 + 5 = 9


#include<stdio.h>

int main (){
    int n = 132456;

    int odd = 0;
    int even = 0;
    int i = 0;

    while(n != 0){
        int digit = n % 10;

        n = (n -digit)/10;

        if(digit % 2 == 0){
            even += digit;
        }else{
            odd += digit;
        }

    }
    printf("%d\n",even);
    printf("%d",odd);
}