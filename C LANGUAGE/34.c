// 34. Access and print the first and last element of the array arr = [10, 20, 30, 40, 50]. Output:[10,50]

#include<stdio.h>
int main () {

    int arr[] ={10,20,30,40,50};
    int length = sizeof(arr)/sizeof(arr[0]);

    printf("    %d  %d",arr[0], arr[length-1]);
}

