// 13. Check if the array arr = [1, 2, 3, 4, 5] contains the number 3 and print true or false.

#include <stdio.h>

int main() {
   int arr[] = {1,2,3,4,5};
   int num = 3;
   int i = 0,count=0;
   int length = sizeof(arr)/sizeof(arr[0]);
   for(i=0;i<length;i++){
    if(arr[i] == num){
      count ++;
        
    }
   }
   if(count >0){
        printf("true");
   }else{
        printf("flase");
   }
   
   
    return 0;
}