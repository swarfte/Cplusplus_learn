/*
 * @Author: Swarfte_Tou
 * @Date: 2021-02-16 13:08:10
 * @LastEditors: Swarfte_Tou
 * @LastEditTime: 2021-02-16 13:21:17
 * @FilePath: \1A\C++\T34_金字塔.cpp
 * @FileOutput: pyinstaller -F -w file_name.py -p C:/python/lib/site-packages 
 * @GUImode: designer
 * @UItoPY: pyuic5 -x name.ui -o name.py 
 */
#include<iostream>
using namespace std;
int main(){
    int num ;
    cin >> num;
    for (int i = 1 ; i <= num ; i++){
        for (int k= num ; k >= i ; k--){
            cout << " ";
        }
        for (int j = 1 ; j <= 2*i -1 ; j++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}