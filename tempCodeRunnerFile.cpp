#include<iostream>
using namespace std;
int main(){
    while(true){
    int x,y;//X代表 列(row),y代表 行(column)
    cin >> x >> y;
    int number[x][y];
    for (int i = 0 ; i<x ; i++){
        for (int j = 0 ; j < y ; j++){
            cin >> number[i][j];
        }
    }
    int user_number[y][x];
    for (int i = 0 ; i <y ; i++){
        for (int j = 0 ; j<x ; j++){
            user_number[i][j] = number[j][i];
            cout << user_number[i][j] << " ";
        }
        cout << endl;
    }
    }
    return 0;
}