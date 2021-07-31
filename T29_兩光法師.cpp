/*
 * @Author: Swarfte_Tou
 * @Date: 2021-02-15 19:55:37
 * @LastEditors: Swarfte_Tou
 * @LastEditTime: 2021-02-15 20:02:08
 * @FilePath: \1A\C++\T29_兩光法師.cpp
 * @FileOutput: pyinstaller -F -w file_name.py -p C:/python/lib/site-packages 
 * @GUImode: designer
 * @UItoPY: pyuic5 -x name.ui -o name.py 
 */
#include<iostream>
using namespace std;
int main(){
    int M,D;
    cin >> M >> D;
    int S = (M*2+D)%3;
    if (S == 0 ){
        cout << "普通" <<endl;
    }else if (S == 1){
        cout << "吉"<<endl;
    }else if (S == 2){
        cout << "大吉" <<endl;
    }
    return 0;
}