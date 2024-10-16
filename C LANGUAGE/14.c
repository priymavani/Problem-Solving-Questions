// 14. Add Element to the Beginning of an Array Example: Input: nums = [1, 2, 3, 4]; Output: nums = [0,1,2,3,4].

#include <stdio.h>
int main() {
   int arr[] = {1,2,3,4};
   int i = 0;
   int length = sizeof(arr)/sizeof(arr[0]);
   for(i=0;i<length;i++){
       arr[length-i]=arr[length-i-1];
   }

   arr[0]=0;
     
   int j =0;
   for(j=0;j<length+1;j++){
       printf("  %d",arr[j]);
   }

    return 0;
}
