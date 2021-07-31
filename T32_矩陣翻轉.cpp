/*
 * @Author: Swarfte_Tou
 * @Date: 2021-02-15 22:49:12
 * @LastEditors: Swarfte_Tou
 * @LastEditTime: 2021-02-15 23:46:09
 * @FilePath: \1A\C++\T32_矩陣翻轉.cpp
 * @FileOutput: pyinstaller -F -w file_name.py -p C:/python/lib/site-packages 
 * @GUImode: designer
 * @UItoPY: pyuic5 -x name.ui -o name.py 
 */
#include<iostream>
using namespace std;
int main(){
    int x,y;//X代表 列(row),y代表 行(column)
    while (cin >> x >> y){
    int number[x][y];
    for (int i = 0 ; i<x ; i++){
        for (int j = 0 ; j < y ; j++){
            cin >> number[i][j];
        }
    }
    int user_number[y][x];
    for (int i = 0 ; i <y ; i++){
        for (int j = 0 ; j<x ; j++){
            user_number[i][j] = number[j][i];
            cout << user_number[i][j] << " ";
        }
        cout << endl;
    }
    }
    return 0;
}