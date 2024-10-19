/*
TASK: fortress.cpp
LANG: C++
AUTHOR: Ken
*/

#include <iostream>
using namespace std;

int cal(int m, int n) {
    
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    //output array
    int arrout[20];
    //assign val
    int m,n;

    for(int i = 0; i < 20; i++) {
        cin >> m >> n;
        arrout[i] =  cal(m,n);
    }

    for(int i = 0; i < 20; i++) {
        cout << arrout[i];
    }
}