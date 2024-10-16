// 25. Write a program to split a string into an array of words.

#include<stdio.h>
#include<string.h>

int main(){

    char str[] = "Hello world, welcome to JavaScript!";
    int length = strlen(str);
    char arr[] = {};
    int arrlen=1;
    int i = 0 ,j=0;
    int looplen = 0;
int len=0 ;
    for(j = 0;j<arrlen;j++){
    
     char newstr[]="";
      
        

    
    for(i =looplen;i<length ;i++){
         
      
        if(str[i] != 32 && str[i] != 0 && str[i] != 44){
            newstr[len ]= str[i];
            printf("%c\n",str[i]);
            len ++;
            looplen ++;
        }
        
        if(str[i] == 32 ){
            newstr[len] = 0;
            arr[arrlen] = newstr;
            printf("%s\n",newstr);
            arrlen ++;
            if(str[i+1] == 0 ){
                arrlen --;
                looplen ++;
            }
        }
        // if(str[i] == 44){
        //     continue;
        // }


    }
    
}
}

