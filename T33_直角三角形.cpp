/*
 * @Author: Swarfte_Tou
 * @Date: 2021-02-16 13:02:25
 * @LastEditors: Swarfte_Tou
 * @LastEditTime: 2021-02-16 13:04:49
 * @FilePath: \1A\C++\T33_直角三角形.cpp
 * @FileOutput: pyinstaller -F -w file_name.py -p C:/python/lib/site-packages 
 * @GUImode: designer
 * @UItoPY: pyuic5 -x name.ui -o name.py 
 */
#include<iostream>
using namespace std;
int main(){
    int num = 0;
    cin >> num;
    for (int i = 1; i <= num; i++){
        for (int j = 1; j <= i ; j++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}