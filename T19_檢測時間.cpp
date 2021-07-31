/*
 * @Author: Swarfte_Tou
 * @Date: 2021-02-14 23:55:57
 * @LastEditors: Swarfte_Tou
 * @LastEditTime: 2021-02-15 00:08:19
 * @FilePath: \1A\C++\T19_檢測時間.cpp
 * @FileOutput: pyinstaller -F -w file_name.py -p C:/python/lib/site-packages 
 * @GUImode: designer
 * @UItoPY: pyuic5 -x name.ui -o name.py 
 */
#include<iostream>
using namespace std;
int main(){
    int a ,b ;
    cin >> a >> b;
    if (7 <= a <= 17, 0 <= b <= 60 ){
        if (a == 7){
            if (b >= 30){
                cout << "上學" <<endl;
            }else {
                cout << "睡覺" <<endl;
            }
        }else if (a == 17){
            if (b >= 1){
                cout << "睡覺"<<endl;
            }else {
                cout << "上學"<<endl;
            }
        }else {
            cout <<"上學"<<endl;
        }
    }else {
        cout <<"睡覺"<<endl;
    }
    return 0;
}