#include<stdio.h>

// function to sort an array using pointers
void sort(int n, int* ptr)
{
    int i, j, t;
    for (i = 0; i < n; i++) {
  
        for (j = i + 1; j < n; j++) {
  
            if (*(ptr + j) < *(ptr + i)) {
  
                t = *(ptr + i);
                *(ptr + i) = *(ptr + j);
                *(ptr + j) = t;
            }
        }
    }
    for (i = 0; i < n; i++)
        printf("%d ", *(ptr + i));
}


int main(){
    // varible with address
    int a, *p;
    p = &a;
    printf("values of a is %d and address is %d", a, p);


    // swap 2 nums using pointer
    int a=10, b=20, *p, *q;
    p = &a;
    q = &b;
    int temp = *p;
    a = *q;
    b = temp;
    printf("%d %d",a,b);


    // value and address of a variable
    int a;
    printf("value of a is %d and address is %d",a,&a);


    // sum of two nums using pointer
    int a = 10, b = 20;
    int *ptr1, *ptr2;
    ptr1 = &a;
    ptr2 = &b;
    int sum = *ptr1 + *ptr2;
    printf("sub of %d and %d is %d",a,b,sum);
    

    // sum of elems of an array using pointer
    int arr[5] = {1,2,3,4,5};
    int sum = 0, *ptr;
    ptr = arr;
    for (int i = 0; i < 5; i++)
    {
        sum = sum + *ptr;
        ptr++;
    }
    printf("sum of the array is %d", sum);
    

    // sorting using pointer
    int n = 5;
    int arr[] = { 0, 23, 14, 12, 9 };
    sort(n, arr);

    return 0;
}