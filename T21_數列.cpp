/*
 * @Author: Swarfte_Tou
 * @Date: 2021-02-15 00:14:45
 * @LastEditors: Swarfte_Tou
 * @LastEditTime: 2021-02-15 10:03:42
 * @FilePath: \1A\C++\T21_數列.cpp
 * @FileOutput: pyinstaller -F -w file_name.py -p C:/python/lib/site-packages 
 * @GUImode: designer
 * @UItoPY: pyuic5 -x name.ui -o name.py 
 */
#include<iostream>
using namespace std;
int main(){
    int user;
    cin >>user;
    for (int i = 1 ; i < user + 1 ; i++){//順序
        cout << i << " ";
    }
    cout <<endl;
    for (int i = 1 ; i < user + 1 ; i++){//奇數
        if (i % 2 == 1){
            cout << i << " ";
        }
    }
    cout <<endl;
    for (int i = 1 ; i < user + 1 ; i++){//偶數
        if (i % 2 == 0){
            cout << i << " ";
        }
    }
    cout <<endl;
    for (int i = 1 ; i < user +1 ; i++){//倒序
        cout << user + 1 - i << " ";
    }
    cout <<endl;
    int num_2 = 2;
    for (int i = 1 ; i < user + 1 ; i++){//2的次方
        cout << num_2 << " ";
        num_2 = 2*num_2;
    }
    cout <<endl;
    int num_3 = 3;
    for (int i = 1 ; i < user +1 ; i++){//3的次方
        cout << num_3 << " ";
        num_3 = 3 * num_3;
    }
    cout <<endl;
    for (int i = -1 * user ; i < user +1 ; i++){//由負數到正數
        cout << i << " ";
    }
    cout <<endl;
    int number_use =1;
    for (int i = 1 ; i < user +1 ; i++){//2的次方倒序
        if (i == 1){
            for (int j = 1 ; j < user +1 ; j++){
                number_use = 2 * number_use;
            }
        }
        cout << number_use << " ";
        number_use = number_use / 2;
    }
    return 0;
}