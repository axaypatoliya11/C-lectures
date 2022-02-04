#include<stdio.h>

struct info
{
    int id;
    char name[20];
};


int main(){
    struct info user1;
    user1.id = 1;
    memcpy(user1.name, "sample", 20);
    printf("%d %s", user1.id, user1.name);

    return 0;
}