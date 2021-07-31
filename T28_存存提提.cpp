/*
 * @Author: Swarfte_Tou
 * @Date: 2021-02-15 18:07:08
 * @LastEditors: Swarfte_Tou
 * @LastEditTime: 2021-02-15 19:38:39
 * @FilePath: \1A\C++\T28_存存提提.cpp
 * @FileOutput: pyinstaller -F -w file_name.py -p C:/python/lib/site-packages 
 * @GUImode: designer
 * @UItoPY: pyuic5 -x name.ui -o name.py 
 */
#include<iostream>
using namespace std;
int main(){
    int number,run;
    cin >> number >> run;
    int people[number];
    for (int i = 0 ; i <run ;i++){
        people[i] = 0;
    }
    for (int i = 0; i< run ; i++){
        int human,check,money;
        cin >> human >> check >> money;
        if (check == 1){
            people[human] += money;
        }else {
            people[human] -= money;
        }
    }
    for (int i = 0 ; i < number ; i++){
        cout << i << " : " << people[i] << endl ;
    }

    return 0;
}