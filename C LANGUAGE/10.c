
// 10. Given an array of integers, count how many numbers are even and how many are odd.
// Example
// Input: [1, 2, 3, 4, 5]
// Output: Even: 2, Odd: 3
#include<stdio.h>
int main(){
	int arr[]={1,2,3,4,5};
	int i,odd =0,even =0;
	int length = sizeof(arr)/sizeof(arr[0]);
	for(i =0;i<length;i++){
		if(arr[i]%2 == 0){
			even ++;
		}
		else{
			odd ++;
		}
	}
	printf(" even: %d",even);
	printf(" odd: %d",odd);
}
