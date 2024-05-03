#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEN 100

// 凯撒密码加密函数
void encrypt(char *text, int shift) {
    int i;
    for (i = 0; text[i] != '\0'; i++) {
        if (text[i] >= 'a' && text[i] <= 'z') {
            text[i] = (text[i] - 'a' + shift) % 26 + 'a';
        } else if (text[i] >= 'A' && text[i] <= 'Z') {
            text[i] = (text[i] - 'A' + shift) % 26 + 'A';
        }
    }
}

// 凯撒密码解密函数
void decrypt(char *text, int shift) {
    encrypt(text, 26 - shift); // 解密就是将加密的逆向移动
}

int main() {
    char text[MAX_LEN] = "HelloWorld";
    int shift = 25;

    printf("HelloWorld / shift: 25 to encrypt/decrypt: \n");
    
    text[strcspn("HelloWorld", "\n")] = '\0'; // 移除fgets函数添加的换行符

    encrypt(text, shift);
    printf("Encrypted text: %s\n", text);
    decrypt(text, shift);
    printf("Decrypted text: %s\n", text);


    return 0;
}
