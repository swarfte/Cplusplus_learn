/*
 * @Author: Swarfte_Tou
 * @Date: 2021-02-14 23:22:50
 * @LastEditors: Swarfte_Tou
 * @LastEditTime: 2021-02-14 23:25:41
 * @FilePath: \1A\C++\T11_變數交換.cpp
 * @FileOutput: pyinstaller -F -w file_name.py -p C:/python/lib/site-packages 
 * @GUImode: designer
 * @UItoPY: pyuic5 -x name.ui -o name.py 
 */
#include<iostream>
using namespace std;
int main(){
    int n = 50;
    int m = 100;
    int temp ;
    cout << n << " and " << m << endl;
    temp = m;
    m = n;
    n= temp;
    cout << n << " and " << m << endl;
    return 0;
}