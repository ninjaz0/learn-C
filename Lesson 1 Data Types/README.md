# Lesson 1 Data Types

### 程序运行结果:

```
int a = 10
float b = 3.14
double c = 2.71828
char d = A
string str = Hello, world!
long e = 123456789
unsigned int f = 100

Size of int: 4 bytes
Size of float: 4 bytes
Size of double: 8 bytes
Size of char: 1 bytes
Size of long: 8 bytes
Size of variable a: 4 bytes
Size of string str: 14 bytes
```
### 数据类型所占大小如图:
| Data Type / Object | Size (bytes) |
|-------------------|-------------|
| char              | 1           |
| int               | 4           |
| float             | 4           |
| variable a        | 4           |
| double            | 8           |
| long              | 8           |
| string str        | 14          |

### 占位符的使用:

| **类型**                | **占位符** | **含义**                                                     | **示例代码**                                 | **示例输出**         |
| ----------------------- | ---------- | ------------------------------------------------------------ | -------------------------------------------- | -------------------- |
| 整型 (`int`)            | `%d`       | 输出带符号的十进制整数                                       | `printf("int a = %d\n", 42);`                | `int a = 42`         |
| 浮点型 (`float`)        | `%.2f`     | 输出浮点数，保留2位小数（四舍五入）                          | `printf("float b = %.2f\n", 3.141);`         | `float b = 3.14`     |
| 双精度 (`double`)       | `%.5lf`    | 输出双精度浮点数，保留5位小数（`printf`中`%lf`与`%f`功能相同，但`scanf`中需区分） | `printf("double c = %.5lf\n", 3.141592);`    | `double c = 3.14159` |
| 字符 (`char`)           | `%c`       | 输出单个字符（ASCII码或字符变量）                            | `printf("char d = %c\n", 'A');`              | `char d = A`         |
| 字符串 (`char[]`)       | `%s`       | 输出字符串（直到遇到空字符`\0`）                             | `printf("string str = %s\n", "Hello");`      | `string str = Hello` |
| 长整型 (`long`)         | `%ld`      | 输出带符号的长整型十进制整数                                 | `printf("long e = %ld\n", 1000000L);`        | `long e = 1000000`   |
| 无符号整型 (`unsigned`) | `%u`       | 输出无符号十进制整数（无正负号）                             | `printf("unsigned f = %u\n", 255);`          | `unsigned f = 255`   |
| 无符号长整型 (`size_t`) | `%lu`      | 输出`sizeof`结果（`size_t`类型为无符号长整型）               | `printf("Size of int: %lu\n", sizeof(int));` | `Size of int: 4`     |

------

## Q&A

### 1.字符串可以怎么理解?

**C语言的字符串本质是以'\0'结尾的字符数组**

也就是说,像字符串 char str[] = "Hello, world!" 包含两部分:<br>

1.**​可见字符**​：<br>
&emsp;&emsp; 字符串 "Hello, world!" 包含 ​13个可见字符​（包括空格和逗号）：<br>
&emsp;&emsp; H, e, l, l, o, ,,  , w, o, r, l, d, !<br>
2.**​终止符**​：<br>
&emsp;&emsp; C语言要求字符串必须以空字符 **'\0'**（ASCII值为0）结尾，占用 ​1字节。

因此，该字符串实际占用的总空间为：​13（可见字符） + 1（终止符） = 14字节

