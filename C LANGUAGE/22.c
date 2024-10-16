// 22. Write a program to find the length of a given string.

#include <stdio.h>
#include <string.h>

int main(){
    char str[] = "Hello, World!" ;
    int length = 0;
    int i= 0;
  
  for(i =0 ; str[i] != 0;i++){

    length ++;
  }
  printf("%d",length);

}