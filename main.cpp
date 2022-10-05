/*词法分析器 编译原理大作业1*/
#define _CRT_SECURE_NO_WARNINGS
#include "lex_analyze.h"
#include<string.h>
#include<stdio.h>
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string input, output;
    fstream fin, fout;  
    cout << "                 词法分析器               " << endl;
    cout << "请输入程序名:" << endl;
    cin >> input;
    cout << "输入你想要保存分析的目标文件名: " << endl;
    cin >> output;
    
    init();
    text_analyse(input, output);
    fin.close();
    fout.close();
    cout << "程序已分析完成分析并保存至目标文件" << endl;

    return 0;
}
