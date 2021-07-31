/*
 * @Author: Swarfte_Tou
 * @Date: 2021-02-14 22:50:42
 * @LastEditors: Swarfte_Tou
 * @LastEditTime: 2021-02-14 23:05:21
 * @FilePath: \1A\C++\T7_秒轉時間.cpp
 * @FileOutput: pyinstaller -F -w file_name.py -p C:/python/lib/site-packages 
 * @GUImode: designer
 * @UItoPY: pyuic5 -x name.ui -o name.py 
 */
#include<iostream>
using namespace std;
int main(){
    int time ;
    cin >> time;
    int hr = time / 3600;
    int min = (time - hr * 3600) / 60;
    int sec = time - hr *3600 - min * 60;
    cout << hr << " hr " << min << " mins " << sec << " sec " << endl;
    return 0;
}