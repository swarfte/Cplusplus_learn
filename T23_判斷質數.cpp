/*
 * @Author: Swarfte_Tou
 * @Date: 2021-02-15 10:08:18
 * @LastEditors: Swarfte_Tou
 * @LastEditTime: 2021-02-15 10:13:38
 * @FilePath: \1A\C++\T23_判斷質數.cpp
 * @FileOutput: pyinstaller -F -w file_name.py -p C:/python/lib/site-packages 
 * @GUImode: designer
 * @UItoPY: pyuic5 -x name.ui -o name.py 
 */
#include<iostream>
using namespace std;
int main(){
    int user;
    cin >> user;
    int check = 0;
    for (int i = 1; i < user +1 ; i++){
        if (user % i == 0){
            check++;
        }
    }
    if (check <= 2){
        cout << "質數";
    }else {
        cout << "非質數";
    }
    return 0;
}