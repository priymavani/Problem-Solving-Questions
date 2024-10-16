// 24. Write a program to remove whitespace from both ends of a string.Example: Input: " hello ", Output: "hello".


#include<stdio.h>
#include<string.h>

int main(){


    char str[] = " hello ";
    int len = strlen(str);

    int i =0;

int j =0,count = 0 ;
     for(j=0;j<len;j++){
         if(str[j] == 32){
           count ++ ;
       }
     }

    for(i = 0 ; i<len ; i++){

        if(str[i] == 32 && str[i+1] != 32){
         
            int temp = str[i];
            str[i] = str[i+1];
            str[i+1] = temp;
           


        }
    }
    str[len - count]=0;
    printf("%d\n",strlen(str));
    printf("%s",str);
}