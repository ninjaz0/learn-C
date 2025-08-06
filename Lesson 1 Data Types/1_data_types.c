#include <stdio.h>  // 调用标准输入输出头文件

int main() {
    // 整型 4bytes
    int a = 10;
    // 浮点型 4bytes
    float b = 3.14f;
    // 双精度浮点型 8bytes
    double c = 2.71828;
    // 字符型 1byte
    char d = 'A';
    // 字符串型 (实际上是字符数组)
    char str[] = "Hello, world!";  // []表示这是一个数组，长度由编译器自动计算
    // 长整型 8bytes
    long e = 123456789L;
    // 无符号整型 4bytes
    unsigned int f = 100;

    printf("int a = %d\n", a);
    printf("float b = %.2f\n", b);
    printf("double c = %.5lf\n", c);
    printf("char d = %c\n", d);
    printf("string str = %s\n", str);
    printf("long e = %ld\n", e);
    printf("unsigned int f = %u\n", f);

    // sizeof运算符返回数据类型或变量的字节大小
    printf("\nSize of int: %lu bytes\n", sizeof(int));
    printf("Size of float: %lu bytes\n", sizeof(float));
    printf("Size of double: %lu bytes\n", sizeof(double));
    printf("Size of char: %lu bytes\n", sizeof(char));
    printf("Size of long: %lu bytes\n", sizeof(long));
    printf("Size of variable a: %lu bytes\n", sizeof(a));
    printf("Size of string str: %lu bytes\n", sizeof(str));
    return 0;
}
