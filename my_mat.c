#include <stdio.h>

int min(int x, int y){
    if(x<y)
        return x;
    return y;
}

void the_shortest(int matrix[10][10]){
    for(int i = 0; i< 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (matrix[i][j] == 0 && i != j)
                matrix[i][j] = 999;
        }
    }
    for(int k = 0; k<10; k++){
        for(int i = 0; i< 10; i++){
            for(int j = 0; j< 10; j++){
                if(matrix[i][j]>matrix[i][k] + matrix[k][j]){
                    matrix[i][j] = matrix[i][k] + matrix[k][j];
                }  
                else{
                    matrix[i][j] = matrix[i][j];
                }      
            }
        }
    }
}

void change_values(int matrix[10][10]){
    for(int i=0;i<10; i++){
        for(int j=0;j<10;j++){
            scanf("%d",&matrix[i][j]);
        }  
    }
}