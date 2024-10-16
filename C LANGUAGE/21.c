// 21. Write a program to convert a given string to uppercase.Example: Input: "hello", Output: "HELLO".

#include<stdio.h> 
#include <string.h>
int main (){
    char str[] = "Hello";
    int i = 0;
    int length = strlen(str);
    for(i = 0;i<length;i++){
        int value = str[i];

        if(value >= 97 && value<=122){
            str[i]=value -32;
        }
    }
 
    printf("%s\n",str);
    
}

