// 9. Sort an Array in Ascending Order Example: Input: nums = [4,2,8,5,1]; Output: nums = [1,2,4,5,8].


#include <stdio.h>

int main() {
  int arr[]={4,2,8,5,1};
  int i=0,j=0;
  int len = sizeof(arr)/sizeof(arr[0]);
  for(i=0;i<len;i++){
      for(j = 0;j<len;j++){
          if(arr[j]>arr[i]){
              int temp = arr[i];
              arr[i]=arr[j];
              arr[j]=temp;
          }
      }
  }
  for(int z =0;z<len;z++){
      printf("%d\n",arr[z]);
  }

    return 0;
}