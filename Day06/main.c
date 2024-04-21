#include <stdio.h>

int main() {
    int x = 10; // 宣告一個整數變數 x，並初始化為 10
    int *ptr;   // 宣告一個整數型指標 ptr

    ptr = &x;   // 將 ptr 指向 x 的記憶體位置

    printf("x 的值：%d\n", x);
    printf("ptr 指向的值：%d\n", *ptr); // 通過 *ptr 取得 ptr 所指向的值
    
    *ptr = 20; // 通過指標 ptr 修改 x 的值為 20
    printf("修改後 x 的值：%d\n", x);

    return 0;
}
