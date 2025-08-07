#include <stdio.h>

int main() {
    int a = 0;
    int b = 0;
    int sum = 0;
    scanf("%d %d", &a, &b); // 从标准输入读取两个整数
    sum = a + b; // 计算它们的和
    printf("Sum = %d\n", sum); // 输出结果
    return 0; // 返回0表示程序正常结束
}