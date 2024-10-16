// 69.Write a program to print the elements on
// the main diagonal of a square matrix. The
// main diagonal consists of elements that
// have the same row and column index.
// Example: int arr[3][3] = {1, 2, 3}, {4, 5,
// 6}, {7, 8, 9}; Output:1,5,9

#include <stdio.h>

int main() {
   int arr[3][3] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8,9}
    }; 
    
    
    int row = sizeof(arr)/sizeof(arr[0]);
     int col = sizeof(arr[0])/sizeof(arr[0][0]);
    int sum =0;
   
    for(int i = 0;i<row;i++){
        for(int j = 0;j<col ; j++){
            if(i == j){
                sum = arr[i][j];
                printf("%d\n",sum);
            }
        }
    }
    
   
        
    return 0;
}