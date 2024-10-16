// 35. Print an inverted right-angled triangle pattern with n rows.

#include<stdio.h>

int main (){

    int row = 5;
    int col = row ;

    int i=0,j=0;

    for(i=0; i<row; i++){
        for(j = 0; j< col;j++){
            if( i<=j ){
                printf("* ");
            }
            else {
                printf("  ");
            }
        }
        printf(" \n");
        
    }
}