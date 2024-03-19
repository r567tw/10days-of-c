#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int result,guess;

    guess = 0;
    srand(time(NULL)); // 初始化隨機數種子
    result = rand() % 100 + 1; // 1~100

    while (guess != result) {
        printf("請輸入你猜測的數字(1~100)： ");
        scanf("%d", &guess);

        if (guess > result) {
            printf("太大了！請再猜小一點。\n");
        } else if (guess < result) {
            printf("太小了！請再猜大一點。\n");
        } else {
            printf("恭喜你猜對了！答案就是 %d！\n", result);
        }
    }

    return 0;

}