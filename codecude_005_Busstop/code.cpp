#include <iostream>
#include <algorithm>
using namespace std;
using unint = unsigned int;

unint lcm(unint a, unint b) {
    unint Min = min(a,b);
    unint Max = max(a,b);
    if(Max%Min == 0) {
        return Max;
    }
    else {
        for (int i = Max; ;i += Max) {
        if (i % Min == 0) return i;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int N;
    cin >> N;
    unint T[100000];
    for(int i = 0; i < N; i++) {
        cin >> T[i];
    }
    unint p = T[0];
    for(int i = 1; i < N; i++) {
        unint L = lcm(T[i],p);
        if(L > p) {
            p = L;
        }
    }
    cout << p;
}