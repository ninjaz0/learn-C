# Lesson 1 Data Types

#### 程序运行结果:

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
#### 不同数据类型所占大小如图
| Data Type / Object | Size (bytes) |
|-------------------|-------------|
| char              | 1           |
| int               | 4           |
| float             | 4           |
| variable a        | 4           |
| double            | 8           |
| long              | 8           |
| string str        | 14          |

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

