/*
 * @Author: Swarfte_Tou
 * @Date: 2021-02-14 23:46:10
 * @LastEditors: Swarfte_Tou
 * @LastEditTime: 2021-02-14 23:46:35
 * @FilePath: \1A\C++\T15_進階邏輯.cpp
 * @FileOutput: pyinstaller -F -w file_name.py -p C:/python/lib/site-packages 
 * @GUImode: designer
 * @UItoPY: pyuic5 -x name.ui -o name.py 
 */
#include<iostream>
using namespace std;

int main()
{
    int num;

    while( cin >> num )
    {
        if( not( num==4 or num==13 ) )   // <----here
        {
            cout << "good" << endl;
        }
        else
        {
            cout << "bad" << endl;
        }
    }

    return 0;
}