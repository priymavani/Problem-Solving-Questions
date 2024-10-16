#include<stdio.h>
int main(){

    int num1 = 1;
    int num2 = 5;
   

    int arr[10] = {};
    int len = 0;

    int i;
    for(i =num1 ; i<= num2;i++){
        
        arr[len] = i;
         len ++ ;
    }
    arr[len] = 0;

    int j;
    for(j=0;j<len;j++){
        printf("   %d",arr[j]);
    }
}