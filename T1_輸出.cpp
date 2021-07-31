/*
 * @Author: Swarfte_Tou
 * @Date: 2021-02-14 21:36:44
 * @LastEditors: Swarfte_Tou
 * @LastEditTime: 2021-02-14 21:58:26
 * @FilePath: \1A\C++\T1.cpp
 * @FileOutput: pyinstaller -F -w file_name.py -p C:/python/lib/site-packages 
 * @GUImode: designer
 * @UItoPY: pyuic5 -x name.ui -o name.py 
 */
#include <iostream>
using namespace std;
int main(){
    char name1[10];
    char name2 [10];
    cout <<"hello , world"<<endl;//endl用作換行,cout用作印出
    cout <<"hi";
    cin >>name1;
    cout << name1<<endl;
    cin >> name2;
    cout << name2;
    return 0;
}