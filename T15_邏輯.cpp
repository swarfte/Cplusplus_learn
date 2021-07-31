/*
 * @Author: Swarfte_Tou
 * @Date: 2021-02-14 23:42:08
 * @LastEditors: Swarfte_Tou
 * @LastEditTime: 2021-02-14 23:45:07
 * @FilePath: \1A\C++\T15_邏輯.cpp
 * @FileOutput: pyinstaller -F -w file_name.py -p C:/python/lib/site-packages 
 * @GUImode: designer
 * @UItoPY: pyuic5 -x name.ui -o name.py 
 */
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin >> a >> b;
    int check = 60 ;
    if (a >= check and b >= check){
        cout << "pass" << endl;
    }
    else {
        cout << "not pass"<<endl;
    }
    return 0;
}