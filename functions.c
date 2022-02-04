// #include<stdio.h>

// int addition(int, int);

// int main(){
//     int ans = addition(2,2);
//     printf("%d",ans);

//     return 0;
// }

// int addition(int a, int b){
//     return a+b;
// }


// sumple intrest
#include<stdio.h>

int simpleInterest(int p, int n, int r){
    return (p*n*r)/100;
}

int main(){
    int p, n, r;
    printf("enter the p: ");
    scanf("%d", &p);

    printf("\nenter the n: ");
    scanf("%d", &n);

    printf("\nenter the r: ");
    scanf("%d", &r);

    printf("simple interest is %d", simpleInterest(p,n,r));

    return 0;
}


// first N nums addition
#include<stdio.h>

int addN(int n){
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum+=i;
    }
    return sum;
}

int main(){
    int range;
    scanf("%d", &range);
    printf("%d", addN(range));
    return 0;
}

// swap 2 nums
#include<stdio.h>
void swapNums(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int num1, num2;
    scanf("%d", &num1);
    scanf("%d", &num2);
    swapNums(&num1,&num2);
    printf("%d %d", num1, num2);
    return 0;
}

#include<stdio.h>

extern void sum(int a, int b);

int main(){
    sum(10,1);

    return 0;
}