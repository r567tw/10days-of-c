#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr1, *ptr2;
    int n = 5;

    // 使用 malloc() 動態配置記憶體空間
    // 分配指定大小的記憶體空間，但不會初始化內容
    ptr1 = (int *)malloc(n * sizeof(int));

    // 檢查是否成功配置了記憶體空間
    if (ptr1 == NULL) {
        printf("無法配置記憶體空間。\n");
        return 1;
    }

    // 使用 calloc() 動態配置記憶體空間
    // 分配指定大小的記憶體空間並初始化內容為零
    ptr2 = (int *)calloc(n, sizeof(int));

    // 檢查是否成功配置了記憶體空間
    if (ptr2 == NULL) {
        printf("無法配置記憶體空間。\n");
        return 1;
    }

    printf("ptr1 的指標值：%p\n", (void *)ptr1);
    printf("ptr2 的指標值：%p\n", (void *)ptr2);

    // 釋放使用 malloc() 配置的記憶體空間
    free(ptr1);
    // 釋放使用 calloc() 配置的記憶體空間
    free(ptr2);

    return 0;
}
