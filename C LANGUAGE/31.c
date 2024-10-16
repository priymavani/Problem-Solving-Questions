// 31. Write a program to repeat a string a specified number of times.Example: Input: ("hello", 3), Output: "hellohellohello".

#include<stdio.h>
#include<string.h>

int main(){

    char str[] = "hello";
    int repeat = 3;
    int len = strlen(str);

    char newstr[repeat*len +1];
    int newlen = 0;

    int i = 0;
    int j = 0;

    for(i = 0; i < repeat;i++){
        printf("%d\n",newlen);
        for(j =0 ; j<len ; j++){
            newstr[newlen] = str[j];
            newlen ++ ;
        }

        
    }
    newstr[newlen] = 0;
    printf(" new str %s\n",newstr);
}
