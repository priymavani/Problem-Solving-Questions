// 36. Print a pyramid pattern with n rows.

#include<stdio.h>

int main (){

    int row = 5;
    int col = row ;

    int i=0,j=0;

    for(i=1; i<=row; i++){
        for(j = 1; j<=col;j++){
            if( i+j>=row +1 ){
                printf("* ");
            }
            else{
                printf(" ");
            }
        }
        printf( "\n");
        
    }
}