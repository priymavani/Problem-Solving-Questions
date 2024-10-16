// 15. Remove the Last element Input: nums = [1, 2, 3, 4,5]; Output: nums = [1,2,3,4].
#include <stdio.h>
int main(){
int arr[] = {1,2,3,4};
int length=sizeof(arr)/sizeof(arr[0]);
int i = 0;
length--;
// arr[length-1]=0;
arr[(length)];

int length2= sizeof(arr)/sizeof(arr[0]);
for(i = 0;i<length+1;i++){
    printf("  %d",arr[i]);
}

   return 0;
}