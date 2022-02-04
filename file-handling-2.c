// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

int main() {
    // square of numbers
    // printf("how many numbers do you want?");
    // int num;
    // scanf("%d", &num);
    // int *fp;
    // fp = (int*)calloc(num, sizeof(int));
    // for(int i=0; i<num; i++){
    //     scanf("%d", &fp[i]);
    // }
    // for(int i=0; i<num; i++){
    //     printf("square of %d is %d\n", fp[i], fp[i]*fp[i]);
    // }
    
    // employee data(age)
    int *fp;
    printf("how much employee do you want to add?: ");
    int emp_count;
    scanf("%d", &emp_count);
    fp = (int*)calloc(emp_count, sizeof(int));
    for(int i=0; i<emp_count; i++){
        scanf("%d", &fp[i]);
    }
    
    printf("do you want to add more employee's age?(1 to add 0 for not): ");
    int more;
    scanf("%d", &more);
    int emp_more;
    if (more == 1){
        printf("how much more you want to add?: ");
        scanf("%d", &emp_more);
        fp = (int*)realloc(fp, sizeof(int)*(emp_count+emp_more));
        for(int i=emp_count; i<(emp_count+emp_more); i++){
            scanf("%d", &fp[i]);
        }   
    }
    
    for(int i=0; i<(emp_count+emp_more); i++){
        printf("employee id -  %d & age -  %d\n", i+1, fp[i]);
    }
    
    return 0;
}