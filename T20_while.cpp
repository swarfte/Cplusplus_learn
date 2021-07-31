/*
 * @Author: Swarfte_Tou
 * @Date: 2021-02-15 00:12:06
 * @LastEditors: Swarfte_Tou
 * @LastEditTime: 2021-02-15 00:13:23
 * @FilePath: \1A\C++\T20_for.cpp
 * @FileOutput: pyinstaller -F -w file_name.py -p C:/python/lib/site-packages 
 * @GUImode: designer
 * @UItoPY: pyuic5 -x name.ui -o name.py 
 */
#include<iostream>
using namespace std;

int main()
{
    int n;
    int i;

    cin >> n;

    i = 1;
    while( i <= n )
    {
        cout << "No." << i << endl;

        i = i+1;
    }

    return 0;
}