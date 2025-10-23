///week 07-2.cpp
///畫出超大正方形,數字包起來
/// TAICA交大基礎程式設計(C++) 期中考題 地6題
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;

    for (int i=1; i<n*2; i++){
        for (int j=1; j<n*2; j++) {
            int d = max(abs(i-n), abs(j-n));
            cout << d + 1;
        }
        cout << endl; ///"現在i是:" << i << endl;
    }
}
