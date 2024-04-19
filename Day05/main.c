#include <stdio.h>


int power(int i){
    return i*i;
}

int main(){
    printf("%d * %d = %d\n",10,10,power(10));
    printf("%d * %d = %d\n",5,5,power(5));
}
