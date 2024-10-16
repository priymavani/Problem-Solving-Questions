// 67.Write a program to find the maximum
// element in a 2D array.Example:int
// arr[ROWS][COLS] = { {12, 45, 67, 23},{34,
// 78, 56, 90}, {11, 43, 29, 65} };Output:90;



#include <stdio.h>

int main() {
   int arr[3][4] = {
       {12, 45, 67, 23},
       {34,78, 56, 90},
       {11, 43, 29, 65}
       }; 
    
    
    int row = sizeof(arr)/sizeof(arr[0]);
     int col = sizeof(arr[0])/sizeof(arr[0][0]);
    int sum =0;
   
    for(int i = 0;i<row;i++){
        for(int j = 0;j<col ; j++){
           if(arr[i][j]>sum)
                sum = arr[i][j];
               
            
        }
    }
    
   
        printf("%d\n",sum);
    return 0;
}