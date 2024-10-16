// 68.Write a program to find the sum of all
// the elements in a 2D array. Example:int
// arr[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8,
// 9} }; Output:45


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
           
                sum += arr[i][j];
               
            
        }
    }
    
   
        printf("%d\n",sum);
    return 0;
}