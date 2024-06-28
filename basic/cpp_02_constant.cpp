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