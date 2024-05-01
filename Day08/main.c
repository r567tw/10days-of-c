#include <stdio.h>

int main(void){
    FILE *out;
    char content;

    out = fopen("main.txt","r");

    while((content = fgetc(out)) != EOF){
        printf("%c ",content);
    }

    fclose(out);
    return 0;
}