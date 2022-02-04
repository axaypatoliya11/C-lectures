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

// product and id
#include<stdio.h>

int main(){
    float prods[5] = {11.2,22.3,33.4,44.5,55.6};
    printf("enter the number of items");
    int qty;
    scanf("%d",&qty);
    float sum = 0.0;
    for (int i = 0; i < qty; i++){
        printf("enter the product id");
        int prod_id;
        scanf("%d",&prod_id);
        printf("enter the product quantity");
        int qty_prod;
        scanf("%d",&qty_prod);
        sum += prods[prod_id-1]*qty_prod;
    }
    
    printf("%f",sum);
    return 0;
}


// digit game
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(){
    srand(time(0));
    int generated_num = 1+rand()%100;  
    printf("%d", generated_num);
    int user_inp, can;
    printf("enter the number: ");
    scanf("%d", &user_inp);

    startAgain:
    do
    {
        scanf("%d", &user_inp);
        if (user_inp<generated_num)
        {
            printf("\nenter higher value");
        } else if (user_inp>generated_num)
        {
            printf("\nenter lower value");
        } else
        {
            printf("you won!\nenter 1 to continue & 0 to break ");
            scanf("%d", &can);
            if (can==1)
            {
                goto startAgain;
            } else
            {
                break;
            }
        }        
    } while (user_inp!=generated_num);
        
    return 0;
}