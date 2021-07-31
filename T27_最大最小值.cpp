/*
 * @Author: Swarfte_Tou
 * @Date: 2021-02-15 17:57:55
 * @LastEditors: Swarfte_Tou
 * @LastEditTime: 2021-02-15 18:04:42
 * @FilePath: \1A\C++\T27_最大最小值.cpp
 * @FileOutput: pyinstaller -F -w file_name.py -p C:/python/lib/site-packages 
 * @GUImode: designer
 * @UItoPY: pyuic5 -x name.ui -o name.py 
 */
#include<iostream>
using namespace std;
int main(){
    int number;
    cin >> number;
    int number_list[number];
    for (int i = 0 ; i < number ; i++){
        cin >> number_list[i];
    }
    int max,min;
    max = min = number_list[0];
    for (int i = 0 ; i < number ; i++){
        if (number_list[i] > max){
            max = number_list[i];
        }
        if (number_list[i] < min){
            min = number_list[i];
        }
    }
    cout << max <<" " << min ;
    return 0;
}