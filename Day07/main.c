#include <stdio.h>

int main(void){
    FILE *in;

    in = fopen("helloworld.txt","w+");

    fprintf(in,"HelloWorld");

    fclose(in);
    return 0;
}