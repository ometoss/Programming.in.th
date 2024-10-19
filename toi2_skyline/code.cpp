/*
TASK: SKYLINE
LANG: C++
AUTHOR: Ken
*/

#include <iostream>
using namespace std;

int H_arr[3001];

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n;
    int L,H,R,max=0;
    cin >> n;
    while(n--) {
        cin >> L >> H >> R;
        if(R > max) max = R;
        for(int i = L; i < R; i++) {
            if(H > H_arr[i]) {
                H_arr[i] = H;
            }
        }
    }

    for(int i = 1; i <= max; i++){
        if(H_arr[i] != H_arr[i-1]) {
            cout << i << " " << H_arr[i] << " ";
        }
    }
}