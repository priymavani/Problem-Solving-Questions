// 70.Write a program to find the sum of each
// row in a 2D array and print it. Example:int
// arr[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8,
// 9} }; Output: Sum of row 1: 6 Sum of row 2:
// 15 Sum of row 3: 24

#include <stdio.h>

int main() {
   int arr[3][3] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8,9}
    }; 
    
    
    int row = sizeof(arr)/sizeof(arr[0]);
    // int col = sizeof(arr[0])/sizeof(arr[0][0]);
    int sum1 =0;
    int sum2 =0;
    int sum3 =0;
    int value =0;
    for(int i = 0;i<row;i++){
        sum1 += arr[0][i];
        sum2 += arr[1][i];
        sum3 += arr[2][i];
       
    }
    
    printf("%d\n",sum1);
        printf("%d\n",sum2);
        printf("%d\n",sum3);
        
    return 0;
}