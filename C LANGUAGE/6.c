
// 6. Write a function that checks if a username and password match predefined values. If the username is "admin" and the password is "1234", print "Login successful"; otherwise, print "Login failed."

#include <stdio.h>
#include <string.h>
void match(char username[],int password){
char name[] ="admin";
int pass = 1234;
int i =0,count=0,length=strlen(username);
for(i=0;i<length;i++){
    if(username[i] == name[i] ){
        count ++;
    }
}
if(count == length && password ==pass){
    printf("Login successful.");
}else{
     printf("Login failed.");
}
}
int main() {
    
   match("admin",1234);

    return 0;
}