#include<stdio.h>

struct info{
    int id;
    char name[20];
};

union uni{
    int key;
    char role[20];
};


int main(){
    // union is like structure, but unlike structure we can access only one element of an union at a time

    struct info i1;
    i1.id = 1;
    memcpy(i1.name,"structure name",20);
    printf("structure informations are - id:%d and name:%s\n",i1.id,i1.name);


    union uni u1;
    u1.key = 1;
    printf("union key: %d\n",u1.key);
    memcpy(u1.role,"union role",20);
    printf("union key: %d\n",u1.key);
    printf("union role: %s\n",u1.role);
    

    return 0;
}