#include<stdio.h>

int main(){
    int id[5] = {1,2,3,4,5};
    int pin[5] = {1123,2234,3345,4456,5567};
    int balance[5][2] = {{1123,100},{2234,100},{3345,100},{4456,100},{5567,100}};

    int pin_inp, try=3, blocked;
    printf("enter the pin ");
    scanf("%d",&pin_inp);
        for (int i = 0; i < 5; i++)
        {
            if (pin_inp == pin[i])
            {
                printf("user found\n");
                goto next;
            } else
            {
                try-=1;
                printf("youre left with %d chances \n",try);
                if (try==0)
                {
                    printf("CARD BLOCKED!");
                    blocked = 1;
                    break;
                } else
                {
                    printf("enter the pin again ");
                    scanf("%d",&pin_inp);
                    
                } 
        }
    }
    

    next:{        
        printf("which operation do you want to perform?\n1)check balance\n2)withdrawal\n3)deposit\nenter 1, 2 or 3 ");
        int ind;
        int op;
        scanf("%d", &op);
        for (int i = 0; i < 5; i++)
        {
            if(pin[i]==pin_inp){
                ind = i;
            }
        }
        
        
        if (op==1)
        {
            printf("your current balance is: %d\n", balance[ind][1]);
        } else if (op==2)
        {
            printf("how nuch you want to withdraw?");
            int with_amount;
            scanf("%d",&with_amount);
            balance[ind][1] = balance[ind][1] - with_amount;
            printf("now your balance is: %d\n", balance[ind][1]);
        } else if(op==3)
        {
            printf("how nuch you want to deposit?");
            int depo_amount;
            scanf("%d",&depo_amount);
            balance[ind][1] = balance[ind][1] + depo_amount;
            printf("now your balance is: %d\n", balance[ind][1]);
        } 
        

    }

    return 0;
}