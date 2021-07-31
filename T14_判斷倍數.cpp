/*
 * @Author: Swarfte_Tou
 * @Date: 2021-02-14 23:37:30
 * @LastEditors: Swarfte_Tou
 * @LastEditTime: 2021-02-14 23:41:12
 * @FilePath: \1A\C++\T14_判斷倍數.cpp
 * @FileOutput: pyinstaller -F -w file_name.py -p C:/python/lib/site-packages 
 * @GUImode: designer
 * @UItoPY: pyuic5 -x name.ui -o name.py 
 */
#include<iostream>
using  namespace std;
int main(){
    int a,b;
    cin >> a >> b;
    int check = a % b;
    if (check == 0){
        cout << a <<"是"<<b<<"的倍數"<<endl;
    }
    else {
        cout <<a <<"不是"<<b<<"的倍數"<<endl;
    }
}