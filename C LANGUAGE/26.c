// 26. Write a program to check if a string ends with a specific character.Example: Input: ("codinggita", "a"), Output: true.

#include<stdio.h>
#include<string.h>

int main(){
char str[] = "codinggita";
char a[] ="a"; 

   int length = strlen(str);
    int value = a[0] ;
    if(str[length-1] == value ){
        printf("true");
    }else{
        printf("false");
    }
}
