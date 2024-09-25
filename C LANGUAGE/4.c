// 4. Write a function to check whether a given character is a vowel or consonant.

#include <stdio.h>
void characteris(char a){
    if(a=='a' || a=='e'|| a=='i'||a=='o'|| a=='u'|| a=='A' || a=='E'|| a=='I'||a=='O'|| a=='U'){
        printf("character is a vowel ");
    }else{
         printf("character is a consonant ");
    }
}
int main() {
    characteris('p');
    return 0;
}