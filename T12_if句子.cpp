/*
 * @Author: Swarfte_Tou
 * @Date: 2021-02-14 23:26:31
 * @LastEditors: Swarfte_Tou
 * @LastEditTime: 2021-02-14 23:33:34
 * @FilePath: \1A\C++\T12_if句子.cpp
 * @FileOutput: pyinstaller -F -w file_name.py -p C:/python/lib/site-packages 
 * @GUImode: designer
 * @UItoPY: pyuic5 -x name.ui -o name.py 
 */
#include<iostream>
using namespace std;
int main() {
    int num = 60;
    int user ;
    cin >> user;
    if (user >= num){
        cout << "pass" <<endl;
    }
    else {
        cout << "not pass"<<endl;
    }
}