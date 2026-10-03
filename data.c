#include <stdio.h>
#define rows 2
#define cols 3

int main (void){
    int data [rows][cols] = {{1, 2, 3}, {4, 5, 6}};
    for (int i = 0; i < rows; i++){
        for (int z = 0; z < cols; z++){
            printf("%d", data[i][z]);
        }
        printf("\n");
    }

}