/*
 * @Author: Swarfte_Tou
 * @Date: 2021-02-15 17:48:31
 * @LastEditors: Swarfte_Tou
 * @LastEditTime: 2021-02-15 17:53:29
 * @FilePath: \1A\C++\T26_陣列查詢.cpp
 * @FileOutput: pyinstaller -F -w file_name.py -p C:/python/lib/site-packages 
 * @GUImode: designer
 * @UItoPY: pyuic5 -x name.ui -o name.py 
 */
#include<iostream>
using namespace std;
int main(){
    int poeple , check;
    cin >> poeple >> check;
    int number[poeple];
    for (int i = 0 ; i < poeple ; i++){
        cin >> number[i];
    }
    int check_list[check];
    for (int i = 0 ; i < check ; i++){
        cin >> check_list[i];
    }
    for (int i = 0 ; i < check ; i++){
        cout << number[check_list[i]-1]<<endl;
    }
    return 0;
}