// 23. Write a program to concatenate two given strings. Example: Input: ("hello", " world"), Output: "hello world".

#include<stdio.h>
#include<string.h>
int main(){
    char str1[] = "hello";
    char str2[] = " world";
    int length = strlen(str1) + strlen(str2);

    char str[length] ;

    sprintf(str,"%s %s",str1,str2);

    printf("%s\n",str);

}

// void concatenate(char word1[],char word2[]){
//     char newstr[] ="";
//     int length1 = strlen(word1);
//     int length2 = strlen(word2);

//     int i=0;
    

//     for(i = 0;i<length1;i++){
//         newstr[i] = word1[i];
//     }
//     printf("%s\n",newstr);

//     // int length = strlen(newstr);
//     //     printf("%d\n",length);

// int j = 0;
//     for(j =0;j<length2;j++){
//         newstr[length1+j] =  word2[j];
//         printf("%c\n",newstr[length+j]);
//     }
//     newstr[length1+length2] = '\0';
//     printf("%s\n",newstr);
// }
// int main(){

//     concatenate("hello", " world");
//     return 0;
    

// }