// fileDemo.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <string> 
#include <fstream>
using namespace std;


int main()
{
    fstream test;
    test.open("text.txt", ios::out);
    test << "张三" << endl << "18" << endl << "男" << endl;
    test.close();

    test.open("text.txt", ios::in);
    string str;
    while (getline(test,str))
    {
        cout << str<<endl;
    }
}

