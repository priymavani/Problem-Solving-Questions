// 29.Write a program to find all pairs in an array whose sum is equal to a given number.
// Example 1:  Input: nums = [2,7,11,15], target = 9 , Output: [0,1].

#include<stdio.h>

int main(){
    int target = 9;
    int arr[] = {2,7,11,15};
    int len  = sizeof(arr)/sizeof(arr[0]);

    int newarr[]={};
    int len2 = 0;

    int i = 0 ,j=0;
    for(i=0;i< len;i++){
        for(j=0;j<len;j++){
            if((arr[i] + arr[j] ) == target){
                newarr[len2] = i;
                // printf("%d\n",i);
                len2 ++ ;
                newarr[len2] = j;
                // printf("%d\n",j);
                len2 ++;
                
            }
        }

    }

    int z =0 ;
    for(z =0 ; z <len2 ; z++){
        printf("    %d",arr[z]);
    }

}



