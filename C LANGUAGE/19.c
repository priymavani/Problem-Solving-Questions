// 19. Check if the array arr = [1, 2, 3, 4, 5] is sorted in ascending order, and print true or false.

#include<stdio.h>
int main(){
    int arr[] ={1,2,3,4,5};
      int length = sizeof(arr)/sizeof(arr[0]);
      int i = 0;
      int count = 0;

      for(i = 0;i<length-1;i++){
        if(arr[i]>arr[i+1]){
            count ++ ;
        }
      }
      if(count == 0){
        printf("true");
      }else{
        printf("flase");
      }
}