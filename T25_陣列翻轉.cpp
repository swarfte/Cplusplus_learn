/*
 * @Author: Swarfte_Tou
 * @Date: 2021-02-15 17:40:26
 * @LastEditors: Swarfte_Tou
 * @LastEditTime: 2021-02-15 17:45:18
 * @FilePath: \1A\C++\T25_陣列.cpp
 * @FileOutput: pyinstaller -F -w file_name.py -p C:/python/lib/site-packages 
 * @GUImode: designer
 * @UItoPY: pyuic5 -x name.ui -o name.py 
 */
#include<iostream>
using namespace std;
int main(){
    int num_use;
    cin >> num_use;
    int number[num_use];
    for (int i = 0 ; i < num_use ; i++){
        cin >> number[i];
    }
    for (int i = num_use - 1; i >= 0 ;i--){
        cout << number[i] << " ";
    }
    return 0;
}