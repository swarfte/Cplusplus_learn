/*
 * @Author: Swarfte_Tou
 * @Date: 2021-02-14 22:46:00
 * @LastEditors: Swarfte_Tou
 * @LastEditTime: 2021-02-14 22:49:25
 * @FilePath: \1A\C++\T6_猜測.cpp
 * @FileOutput: pyinstaller -F -w file_name.py -p C:/python/lib/site-packages 
 * @GUImode: designer
 * @UItoPY: pyuic5 -x name.ui -o name.py 
 */
#include<iostream>
using namespace std;
int main(){
    int number = 185;
    int user;
    cin >> user;
    int ans = number - user;
    cout << "你還差"<<ans <<"cm" <<endl;
    return 0;
}