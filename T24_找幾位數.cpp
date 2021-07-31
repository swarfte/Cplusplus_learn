/*
 * @Author: Swarfte_Tou
 * @Date: 2021-02-15 13:56:42
 * @LastEditors: Swarfte_Tou
 * @LastEditTime: 2021-02-15 14:04:03
 * @FilePath: \1A\C++\T24_找幾位數.cpp
 * @FileOutput: pyinstaller -F -w file_name.py -p C:/python/lib/site-packages 
 * @GUImode: designer
 * @UItoPY: pyuic5 -x name.ui -o name.py 
 */
#include<iostream>
using namespace std;
int main(){
    int  user;
    cin >> user;
    int check_num = 10;
    int check = 1;
    for (int i = 1 ; check != 0 ; i++){
        if (user / check_num != 0){
            check_num = check_num * 10;
        }else {
            check = 0;
            cout << i;
        }
    }
    return 0;
}