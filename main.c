#include <stdio.h>
#include "my_mat.h"

int main(){
    char req;
    int matrix[10][10] = {{0,1,1,1,1,1,1,1,0,0}
                         ,{1,0,1,1,1,1,1,1,0,0}
                         ,{1,1,0,1,1,1,1,1,0,0}
                         ,{1,1,1,0,1,1,1,1,0,0}
                         ,{1,1,1,1,0,1,1,1,0,0}
                         ,{1,1,1,1,1,0,1,1,0,0}
                         ,{1,1,1,1,1,1,0,1,0,0}
                         ,{1,1,1,1,1,1,1,0,0,0}
                         ,{0,0,0,0,0,0,0,0,0,1}
                         ,{0,0,0,0,0,0,0,0,1,0}};
    scanf("%c", &req);
    while (req != 'D')
    {
        if(req == 'A'){
            for(int i=0;i<10; i++){
                for(int j=0;j<10;j++){
                    scanf("%d",&matrix[i][j]);
                }  
            }
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
        scanf(" %c", &req);
        }

        if(req == 'B'){
            int i,j;
            scanf(" %d", &i);
            scanf(" %d", &j);
            if(i != j){
                if(matrix[i][j] > 600 || matrix[i][j] == 0){
                    printf("False\n");//int or char?
                }
                else{
                    printf("True\n");
                }
            }else{
                printf("False\n");
            }
        
            for(int i=0;i<10; i++){
                printf("[");
                for(int j=0;j<10;j++){
                    printf("[%d], ",matrix[i][j]);
                 }
                 printf("[\n");  
            }
            scanf(" %c", &req);
        }

        if(req == 'C'){
            int i,j;
            scanf(" %d", &i);
            scanf(" %d", &j);
            if(i != j){
                if(matrix[i][j] < 600){
                    printf("matrix[i][j]\n");
                }
                else{
                    printf("-1\n");
                }
            }
            scanf(" %c", &req);
        }
    }
    return 0;
}