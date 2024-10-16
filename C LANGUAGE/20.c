// 20. Find and print the difference between the maximum and minimum elements in arr = [80, 30, 70, 50, 20].


#include <stdio.h>
int main (){

    int arr[] = {80,30,70,50,20};
       int length = sizeof(arr)/sizeof(arr[0]);
       int i =0,j=0;
       for(i =0;i<length;i++){
        for(j = i+1;j<length;j++){
            if(arr[i]>arr[j]){
                int temp = arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
       }
       int difference = arr[length-1] - arr[0];
       printf("%d\n",difference);




// or

int o = 0;
int min = arr[0];
int max = 0;

for(o = 0;o <length;o++){
    if(min >arr[o]){
        min = arr[o];
    }
    if(max < arr[o]){
        max = arr[o];
    }
}
// printf("%d\n",max);
// printf("%d\n",min);

int diff = max - min ;
   printf("%d\n",diff);
   
   }