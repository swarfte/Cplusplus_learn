/*
 * @Author: Swarfte_Tou
 * @Date: 2021-02-14 23:09:17
 * @LastEditors: Swarfte_Tou
 * @LastEditTime: 2021-02-14 23:14:09
 * @FilePath: \1A\C++\T8_重覆輸入.cpp
 * @FileOutput: pyinstaller -F -w file_name.py -p C:/python/lib/site-packages 
 * @GUImode: designer
 * @UItoPY: pyuic5 -x name.ui -o name.py 
 */
#include <iostream>
using namespace std;
int main(){
    int name_1 ,name_2;
    while (cin >>name_1 >> name_2) {//每次輸入兩個數字,之後會做甚麼
        cout << name_1 + name_2 <<endl;
    }
    return 0;
}