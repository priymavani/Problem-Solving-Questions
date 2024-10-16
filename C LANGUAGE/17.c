// 17. Count how many positive and negative numbers are in arr = [1, -2, 3, -4, 5, -6] and print the result.


#include <stdio.h>
int main(){
    int arr[] = {1,-2,3,-4,5,-6};
    int positive = 0,negative=0,i;
    int length = sizeof(arr)/sizeof(arr[0]);
    for(i=0 ; i<length;i++){
       if(arr[i]>0){
        positive ++;

       }else{
        negative ++;
       }
    }
    printf(" positive:  %d\n",positive);
     printf(" negative:  %d\n",negative);


}