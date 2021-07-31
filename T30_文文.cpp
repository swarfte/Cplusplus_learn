/*
 * @Author: Swarfte_Tou
 * @Date: 2021-02-15 20:03:56
 * @LastEditors: Swarfte_Tou
 * @LastEditTime: 2021-02-15 20:19:07
 * @FilePath: \1A\C++\T30_文文.cpp
 * @FileOutput: pyinstaller -F -w file_name.py -p C:/python/lib/site-packages 
 * @GUImode: designer
 * @UItoPY: pyuic5 -x name.ui -o name.py 
 */
#include<iostream>
using namespace std;
int main(){
    int year;
    while (cin>>year){
    if (year % 4 == 0 and year % 100 != 0 or year % 400 == 0){
        cout << "閏年"<<endl;
    }else {
        cout << "平年"<<endl;
    }
    }
    return 0;
}