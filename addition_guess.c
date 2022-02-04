#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(){

    int chance = 5, i = 10;

    while (chance!=0)
    {
        srand(time(0));
        int user_1 = 1+rand()%i;
        int user_2 = 1+rand()%i;  
            printf("%d %d %d ",user_1, user_2, user_1+user_2);

            int ans_2;
            printf("enter the addition of this nums %d + %d = ", user_1, user_2);
            scanf("%d", &ans_2);
            while (ans_2!=user_1+user_2)
            {
                printf("enter the addition of this nums %d + %d = ", user_1, user_2);
                scanf("%d", &ans_2);
                chance-=1;
            }
            if (ans_2==user_1+user_2)
                {
                    printf("cheers! level up\n");
                    i*=10;
                } 
                
    }

    
    return 0;
}