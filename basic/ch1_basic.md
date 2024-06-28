# 基础入门
## 1. 常量
**作用:**用于记录程序中不可更改的数据
C++定义常量的两种方式
    1. **#define**宏常量：`#define 常量名 常量值`
       - 通常在文件上方定义，表示一个常量
    2. const修饰的变量`const 数据类型 常量名 = 常量值`
       - 通常在变量定义前加关键字const，修饰该变量为常量，不可修改

**示例:**
```cpp
#include <iostream>
using namespace std;
// 常量的定义方式
// 1、#define 宏常量
// 2、const 修饰的变量

// 1、#define 宏常量
#define DAY 7

int main()
{
    // DAY是常量，一旦修改就会报错
    cout << "one week have: " << DAY << " days" << endl;

    // 2、const 修饰的变量
    const int month = 12;
    // month = 24; const修饰的变量也称为常量
    cout << "one year have: " << month << " month" << endl;

    system("pause");
    return 0;
}
```

## 2. 标识符命名规则
**作用**： C++规定给标识符(变量、常量)命名时，有一套自己的规则
- 标识符不能是关键字
- 标识符只能由字母、数字、下划线组成
- 第一个字符必须为字母或下划线
- 标识符中字母区分大小写

## 3. 数据类型
### 3.1 整型
| 数据类型            | 占用空间                                         | 取值范围           |
| ------------------- | ------------------------------------------------ | ------------------ |
| short(短整型)       | 2字节                                            | $(-2^15 ~ 2^15-1)$ |
| int(整型)           | 4字节                                            | $(-2^31 ~ 2^31-1)$ |
| long(长整型)        | Windows为4字节， Linux为4字节(32位)，8字节(64位) | $(-2^31 ~ 2^31-1)$ |
| long long(长长整形) | 8字节                                            | $(-2^63 ~ 2^63-1)$ |



### 3.2 sizeof关键字

**作用:**利用sizeof关键字可以统计数据类型所占内存大小
**语法:**`sizeof(数据类型/变量)`
**示例:**

```c++
#include <iostream>
using namespace std;

int main()
{
    // 整型
    // 1、短整型
    short num1 = 10;

    // 2、整型
    int num2 = 10;

    // 3、长整型
    long num3 = 10;

    // 4、长长整型
    long long num4 = 10;
    cout << "num1 = " << num1 << " short space is:" << sizeof(num1) << endl;
    cout << "num2 = " << num2 << " int space is:" << sizeof(num2) << endl;
    cout << "num3 = " << num3 << " long space is:" << sizeof(num3) << endl;
    cout << "num4 = " << num4 << " long long  space is:" << sizeof(num4) << endl;

    system("pause");
    return 0;
}
```

