#include <stdio.h>

void add_one(int array[], int length){
    for (int i = 0; i < length; i++){
        array[i] += 1;
    }
}

int main (void){
    int array[] = {1,2,3};
    add_one(array, 3);
    for (int i = 0; i < sizeof(array) / sizeof(array[0]); i++){
        printf("array[%d] : %d\n", i, array[i]);
    }

}