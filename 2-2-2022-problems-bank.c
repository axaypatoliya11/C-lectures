#include<stdio.h>
#include <ctype.h>

int main(){
    // odd & even numbers saperation
    // FILE *fp1, *fp2, *fp3;

    // fp1 = fopen("sample", "w");
    // int number;
    // for(int i = 1; i <= 5; i++)
    // {
    //     scanf("%d", &number);
    //     if(number == -1) break;
    //     putw(number,fp1);
    // }
    // fclose(fp1);

    // fp1 = fopen("sample","r");
    // fp2 = fopen("even","w");
    // fp3 = fopen("odd","w");

    // int c;
    
    // while((c=getw(fp1)) != EOF){
    //         if(c%2==0){
    //             putw(c,fp2);
    //         } 
    //         if(c%2!=0){
    //             putw(c,fp3);
    //         }        

    //  }; 
    
    // fclose(fp1);
    // fclose(fp2);
    // fclose(fp3);


    // fp2 = fopen("even","r");
    // fp3 = fopen("odd", "r");
    // printf("\n\nContents of even file\n\n");
    // while((c = getw(fp2)) != EOF)
    //     printf("%4d", c);

    // printf("\n\nContents of odd file\n\n");
    // while((c = getw(fp3)) != EOF)
    //     printf("%4d", c);
    
    
    // fclose(fp2);
    // fclose(fp3);




    // compare 2 files content
    // int *fp1, *fp2;
    // fp1 = fopen("DATA.txt", "r");
    // fp2 = fopen("sample.txt", "r");

    // char file1, file2;
    // file1 = getc(fp1);
    // file2 = getc(fp2);
    // do{
    //     file1 = getc(fp1);
    //     file2 = getc(fp2);
    // } while((file1 != EOF) && (file2 != EOF));

    // if (file1==file2){
    //     printf("true");
    // } else{
    //     printf("false");
    // }
    // fclose(fp1);
    // fclose(fp2);




    // marks & name of n number of students
    int *fp1;
    printf("how much data you want to add?: ");
    int range;
    scanf("%d", &range);
    fp1 = fopen("sample.txt", "w");
    int i = 1;
    while(range!=0){
        char name[10];
        int marks;
        printf("enter the name for student %d: ", i);
        scanf("%s", name);
        printf("\nenter the marks for student %d: ", i);
        scanf("%d", &marks);

        fprintf(fp1, "name of student %d is: %s\nmarks: %d\n", i, name, marks);

        range--;
        i++;
    }
    fclose(fp1);

    return 0;
}