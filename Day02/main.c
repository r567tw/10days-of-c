# include <stdio.h>


int main(){
    float weight,height,bmi;

    // 輸入使用者的體重（公斤）和身高（公尺）
    printf("請輸入您的體重（公斤）：");
    scanf("%f", &weight);

    printf("請輸入您的身高（公尺）：");
    scanf("%f", &height);

    // 計算BMI
    bmi = weight / (height * height);

    // 顯示BMI值
    printf("您的BMI值為：%.2f\n", bmi);
}