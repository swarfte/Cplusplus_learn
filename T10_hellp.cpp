/*
 * @Author: Swarfte_Tou
 * @Date: 2021-02-14 23:18:34
 * @LastEditors: Swarfte_Tou
 * @LastEditTime: 2021-02-14 23:21:32
 * @FilePath: \1A\C++\T10_hellp.cpp
 * @FileOutput: pyinstaller -F -w file_name.py -p C:/python/lib/site-packages 
 * @GUImode: designer
 * @UItoPY: pyuic5 -x name.ui -o name.py 
 */
#include<iostream>
using namespace std;
int main(){
    // char user[10];
    string user;
    while (cin >> user) {
        cout << "hello, "<<user << endl;
    }
    return 0;
}