#include<stdio.h>

int main(){
    int pin[5] = {1123,2234,3345,4456,5567};
    int balance[5][2] = {{1123,100},{2234,100},{3345,100},{4456,100},{5567,100}};

    int user_pin;
    printf("enter a pin: ");
    scanf("%d",&user_pin);
    
    int try = 3;

    while (try!=0)
    {
        printf("try try try %d",try);
        int flag = 0;
        for (int i = 0; i < 3; i++)
        {
            if (user_pin == pin[i])
            {
                flag = 1;
            }
        }

        if (flag==1)
        {
            printf("success!");
            printf("which operation do you want to perform?\n1)check balance\n2)withdrawal\n3)deposit\nenter 1, 2 or 3: ");
            int ind;
            int op;
            scanf("%d", &op);
            for (int i = 0; i < 5; i++)
            {
                if(pin[i]==user_pin){
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
                break;
            } else
            {
                try-=1;
                printf("you have only %d try",try+1);
                scanf("%d",&user_pin);
            }
            
        if (try==0)
        {
            printf("BLOCKED\n");
        }
    }
    
    
    

    return 0;
}