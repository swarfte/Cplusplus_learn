/*
 * @Author: Swarfte_Tou
 * @Date: 2021-02-16 13:22:50
 * @LastEditors: Swarfte_Tou
 * @LastEditTime: 2021-02-16 13:43:52
 * @FilePath: \1A\C++\T35_乘法表.cpp
 * @FileOutput: pyinstaller -F -w file_name.py -p C:/python/lib/site-packages 
 * @GUImode: designer
 * @UItoPY: pyuic5 -x name.ui -o name.py 
 */
#include<iostream>
using namespace std;
int main(){
    int num;
    cin >> num;
    for (int i = 1; i <= num ; i++){
        for (int j = 1 ; j <=num ;j++){
            cout << i << "*" << j <<"=" << i*j << "\t"; 
        }
        cout <<endl;
    }
    return 0;
}