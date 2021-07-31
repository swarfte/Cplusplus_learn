/*
 * @Author: Swarfte_Tou
 * @Date: 2021-02-15 20:20:31
 * @LastEditors: Swarfte_Tou
 * @LastEditTime: 2021-02-15 21:03:57
 * @FilePath: \1A\C++\T31_回家作業.cpp
 * @FileOutput: pyinstaller -F -w file_name.py -p C:/python/lib/site-packages 
 * @GUImode: designer
 * @UItoPY: pyuic5 -x name.ui -o name.py 
 */
#include<iostream>
using namespace std;
int main(){
    int number;
    cin >> number;
    int number_list[4] ;
    for (int i = 0 ; i< number ; i++){
        int check = 0;
        for (int j = 0 ; j < 4 ;j++){
            cin >> number_list[j];
        }
        int c1 = number_list[3] - number_list[2];
        int c2 = number_list[2] - number_list[1];
        int c3 = number_list[1] - number_list[0];
        if (c1 == c2 and c1 == c3 and c2 == c3){
            for (int j = 0 ; j < 4 ; j++){
                cout << number_list[j] << " ";
            }
            check = (number_list[3] - number_list[2]);
            cout << number_list[3] + check <<endl;
        }else{
            for (int j = 0 ; j < 4 ; j++){
                cout << number_list[j] << " ";
            }
            check = (number_list[3] / number_list[2]);
            cout << number_list[3] * check <<endl;
        }
    }
    return 0;
}