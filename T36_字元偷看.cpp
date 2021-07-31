/*
 * @Author: Swarfte_Tou
 * @Date: 2021-02-16 14:05:44
 * @LastEditors: Swarfte_Tou
 * @LastEditTime: 2021-02-16 14:11:19
 * @FilePath: \1A\C++\T36_字元偷看.cpp
 * @FileOutput: pyinstaller -F -w file_name.py -p C:/python/lib/site-packages 
 * @GUImode: designer
 * @UItoPY: pyuic5 -x name.ui -o name.py 
 */
#include<iostream>
using namespace std;
// int main()
// {
//     string s;
//     char c;

//     while(true)
//     {
//         c = cin.peek();

//         if( '0' <= c and c <= '9' )
//             cout << "即將要輸入數字開頭的東西" << endl;
//         if( 'a' <= c and c <= 'z' )
//             cout << "即將要輸入小寫字母開頭的東西" << endl;

//         cin >> s;
//         cin.get(); //先讀掉 換行字元'\n'   避免下次偷看到
//         cout << "輸入了:" << s << endl;
//     }

//     return 0;
// }
int main(){
    char c;
    c = cin.peek();
    cout << c;
    return 0;
}