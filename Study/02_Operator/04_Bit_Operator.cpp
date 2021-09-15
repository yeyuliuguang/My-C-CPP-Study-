#include <iostream>
using namespace std;

int main()
{
    unsigned int a = 60; // 60 = 0011 1100
    unsigned int b = 13; // 13 = 0000 1101
    int c = 0;

    // 二进制 AND 运算符 , 必须两位都是1,结果才是1
    c = a & b; // 12 = 0000 1100
    cout << "Line 1 - c 的值是 " << c << endl;

    // 二进制 OR 运算符复制一位到结果中, 任意位为1结果才是1
    c = a | b; // 61 = 0011 1101
    cout << "Line 2 - c 的值是 " << c << endl;

    // 二进制异或运算符复制一位到结果中, 必须两位里其中1位是1 ,结果才是1
    c = a ^ b; // 49 = 0011 0001
    cout << "Line 3 - c 的值是 " << c << endl;

    // 二进制补码运算符是一元运算符，具有"翻转"位效果。两位中任意一位是,0反转为1 , 1反转为0
    c = ~a; // -61 = 1100 0011
    cout << "Line 4 - c 的值是 " << c << endl;

    // 变量二进制0011 1100 左移两位,结果 1111 0000
    c = a << 2; // 240 = 1111 0000
    cout << "Line 5 - c 的值是 " << c << endl;

    // 变量二进制0011 1100 右移两位,结果 0000 1111
    c = a >> 2; // 15 = 0000 1111
    cout << "Line 6 - c 的值是 " << c << endl;

    return 0;
}