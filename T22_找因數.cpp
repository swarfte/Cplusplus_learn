/*
 * @Author: Swarfte_Tou
 * @Date: 2021-02-15 10:05:06
 * @LastEditors: Swarfte_Tou
 * @LastEditTime: 2021-02-15 10:07:26
 * @FilePath: \1A\C++\T22_找因數.cpp
 * @FileOutput: pyinstaller -F -w file_name.py -p C:/python/lib/site-packages 
 * @GUImode: designer
 * @UItoPY: pyuic5 -x name.ui -o name.py 
 */
#include<iostream>
using namespace std;
int main(){
    int user;
    cin >> user;
    for (int i = 1 ; i < user+1 ; i++){
        if (user % i == 0){
            cout << i << " ";
        }
    }
    return 0;
}