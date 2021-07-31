/*
 * @Author: Swarfte_Tou
 * @Date: 2021-02-14 23:35:05
 * @LastEditors: Swarfte_Tou
 * @LastEditTime: 2021-02-14 23:36:55
 * @FilePath: \1A\C++\T13_關係.cpp
 * @FileOutput: pyinstaller -F -w file_name.py -p C:/python/lib/site-packages 
 * @GUImode: designer
 * @UItoPY: pyuic5 -x name.ui -o name.py 
 */
#include<iostream>
using namespace std;
int main(){
    int a ,b;
    cin >> a >> b;
    cout << "a==b  :  " << (a==b) << endl;
    cout << "a!=b  :  " << (a!=b) << endl;
    cout << "a>b   :  " << (a>b)  << endl;
    cout << "a>=b  :  " << (a>=b) << endl;
    cout << "a<b   :  " << (a<b)  << endl;
    cout << "a<=b  :  " << (a<=b) << endl;
    return 0;
}