#include<stdio.h>

int main(){
    // FILE *fp;
    // // file creating and wriring
    // fp = fopen("sample.txt", "r+");
    // fprintf(fp, "this is a line appended line using C!");
    // // fclose(fp);
    // rewind(fp); //sets the file pointer to the start

    // // file reading
    // // fp = fopen("sample.txt", "r");
    // char file_content;
    // do {
    //     file_content = getc(fp);
    //     printf("%c", file_content);
    // } while(file_content != EOF);
    // fclose(fp);


    // copy one file to another
    FILE *fp1, *fp2;
    fp1 = fopen("sample.txt","r");
    fp2 = fopen("sample1.txt","w");

    char c;
    do{
        c = getc(fp1);
        fprintf(fp2, "%c", c);
    } while(c != EOF);
    
    return 0;
}