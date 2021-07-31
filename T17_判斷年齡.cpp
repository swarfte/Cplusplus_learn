/*
 * @Author: Swarfte_Tou
 * @Date: 2021-02-14 23:47:56
 * @LastEditors: Swarfte_Tou
 * @LastEditTime: 2021-02-14 23:49:08
 * @FilePath: \1A\C++\T17_判斷年齡.cpp
 * @FileOutput: pyinstaller -F -w file_name.py -p C:/python/lib/site-packages 
 * @GUImode: designer
 * @UItoPY: pyuic5 -x name.ui -o name.py 
 */
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin >> a >> b;
    if (a >= 18 and b >= 16){
        cout << "OK" <<endl;
    }
    else {
        cout << "not OK" <<endl;
    }
}