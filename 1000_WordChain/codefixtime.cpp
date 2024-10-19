#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int L,N;
    string str,ans;
    vector<string> vec;
    cin >> L >> N;
    for(int i = 0; i < N; i++) {
        cin >> str;
        vec.push_back(str);
    }
    if(N==1) {
        cout << vec[0];
    }
    else {
        for(int i = 0; i<N-1; i++) {
            int count = 0;
            for(int j = 0; j < L; j++) {
                if(vec[i][j] != vec[i+1][j]) {
                    count++;
                    if(count > 2) break; 
                }
            }
            if(count > 2) {
                ans = vec[i];
                break;
            }
            else if(i == N-2) {
                ans = vec[i+1];
            }
        }
    }
    cout << ans;
}