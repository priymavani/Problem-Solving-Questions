// 12. Add the number 6 to the end of the array arr = [1, 2, 3, 4, 5] and print the updated array.#include <stdio.h>
#include<stdio.h>
int main() {
    int arr[] = {1,2,3,4,5};
    int length = sizeof(arr)/sizeof(arr[0]);
    arr[length]=6;
    
    int i=0;
    for(i = 0;i<length+1;i++){
        printf("  %d",arr[i]);
    }

    return 0;
}