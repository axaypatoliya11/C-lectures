#include <stdio.h>
#include <stdlib.h>

int main(){
    int *fp;
    fp = (int*)malloc(sizeof(int)); //malloc allocates the memory while runtime | calloc allocates the memory while execution time
    printf("allocated memory: %p\n", fp);
    printf("initial value at allocated memory: %d\n", *fp);
    *fp = 10;
    printf("final value at allocated memory: %d\n", *fp);
    
    free(fp); //to free up the allocated memory


    return 0;
}