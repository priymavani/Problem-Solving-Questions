// 18. Print all elements that are at even indexes in the array arr = [10, 20, 30, 40, 50].

#include <stdio.h>
int main(){
int arr[]={10,20,30,40,50};
int length = sizeof(arr)/sizeof(arr[0]);
int i = 0;
while(i<length){
    printf(" %d",arr[i]);
    i += 2;

}
}