/*
 * @Author: Swarfte_Tou
 * @Date: 2021-02-14 23:50:47
 * @LastEditors: Swarfte_Tou
 * @LastEditTime: 2021-02-14 23:54:26
 * @FilePath: \1A\C++\T18_三角形.cpp
 * @FileOutput: pyinstaller -F -w file_name.py -p C:/python/lib/site-packages 
 * @GUImode: designer
 * @UItoPY: pyuic5 -x name.ui -o name.py 
 */
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin >> a >> b >>c;
    if (a + b > c and a + c > b and b +c > a) {
        cout << "是三角形" <<endl;
    }
    else {
        cout<< "不是三角形" << endl;
    }
    return 0;
}