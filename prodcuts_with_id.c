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