#include <stdio.h>  # 调用标准输入输出头文件

int main() {
    // 整型
    int a = 10;
    // 浮点型
    float b = 3.14f;
    // 双精度浮点型
    double c = 2.71828;
    // 字符型
    char d = 'A';
    // 字符串型 (实际上是字符数组)
    char str[] = "Hello, world!";  // []表示这是一个数组，长度由编译器自动计算
    // 长整型
    long e = 123456789L;
    // 无符号整型
    unsigned int f = 100;

    printf("int a = %d\n", a);
    printf("float b = %.2f\n", b);
    printf("double c = %.5lf\n", c);
    printf("char d = %c\n", d);
    printf("string str = %s\n", str);
    printf("long e = %ld\n", e);
    printf("unsigned int f = %u\n", f);

    return 0;
}
