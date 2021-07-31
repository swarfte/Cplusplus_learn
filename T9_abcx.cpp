/*
 * @Author: Swarfte_Tou
 * @Date: 2021-02-14 23:14:44
 * @LastEditors: Swarfte_Tou
 * @LastEditTime: 2021-02-14 23:17:19
 * @FilePath: \1A\C++\T9_abcx.cpp
 * @FileOutput: pyinstaller -F -w file_name.py -p C:/python/lib/site-packages 
 * @GUImode: designer
 * @UItoPY: pyuic5 -x name.ui -o name.py 
 */
#include <iostream>
using namespace std;
int main(){
    int a,b,c,x;
    int ans;
    while(cin >> a >> b >> c >> x){
        ans = a * x *x + b *x + c;
        cout << "ans=" << ans << endl;
    }
    return 0;
}