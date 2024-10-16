// 39. Given a string, check if all brackets are closed properly. Example:Input: "{[()]}" Output: true


#include<stdio.h>
#include<string.h>
int main(){

    char str[] ="{[()]}";

    int len = strlen(str);
    int open = 0 ;
    int closed =0 ;
    

    for(int i = 0;i<len ; i++){
        int j =0;
           if(str[i] =='{' ){
                open ++ ;
                for(j = i;j<len ; j ++){
                    if(str[j] == '}' ){
                        closed ++ ;
                    }
                } 
            }
            else if(str[i] == '['){
                 open ++ ;
                for(j = i;j<len ; j ++){
                    if(str[j] == ']' ){
                        closed ++ ;
                    }
                }
            }
            else if(str[i] == '('){
                 open ++ ;
                for(j = i;j<len ; j ++){
                    if(str[j] == ')' ){
                        closed ++ ;
                    }
                }
            }


    }

    if(open == closed){
        printf("true");
    }
    else{
        printf("false");
    }
}










// #include<stdio.h>
// #include<string.h>
// int main(){

//     char str[] ="{[()]}";

//     int len = strlen(str);
//     int open = 0 ;
//     int closed =0 ;
    

//     for(int i = 0;i<len ; i++){
//         int j =0;
//            if(str[i] =='{' ){
//                 open ++ ;
//                 int cheak;
//                 for(j = i;j<len ; j ++){
//                     if(str[j] == '('){
//                         cheak ++;
//                     }
//                     if(str[j] == ')'){
//                         cheak ++;
//                     }
//                     if(str[j] == '['){
//                         cheak ++;
//                     }
//                     if(str[j] == ']'){
//                         cheak ++;
//                     }
                    
//                     if(str[j] == '}' &&( cheak % 2 == 0) ){
//                         closed ++ ;
//                     }
//                 } 
//             }
//             else if(str[i] == '['){
//                  open ++ ;
//                   int cheak;
//                 for(j = i;j<len ; j ++){
//                      if(str[j] == '('){
//                         cheak ++;
//                     }
//                     if(str[j] == ')'){
//                         cheak ++;
//                     }
//                     if(str[j] == '{'){
//                         cheak ++;
//                     }
//                     if(str[j] == '}'){
//                         cheak ++;
//                     }
//                     if(str[j] == ']'  && cheak % 2 == 0 ){
//                         closed ++ ;
//                     }
//                 }
//             }
//             else if(str[i] == '('){
//                  open ++ ;
//                   int cheak;
//                 for(j = i;j<len ; j ++){
//                      if(str[j] == '{'){
//                         cheak ++;
//                     }
//                     if(str[j] == '}'){
//                         cheak ++;
//                     }
//                     if(str[j] == '['){
//                         cheak ++;
//                     }
//                     if(str[j] == ']'){
//                         cheak ++;
//                     }
//                     if(str[j] == ')'  && cheak % 2 == 0){
//                         closed ++ ;
//                     }
//                 }
//             }


//     }

//     if(open == closed){
//         printf("true");
//     }
//     else{
//         printf("false");
//     }
// }


