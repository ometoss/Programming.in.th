#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int L,N;
    string str,ans;
    vector<string> vec;
    cin >> L >> N;
    for(int i = 0; i < N; i++) {
        cin >> str;
        vec.push_back(str);
    }
    string pre = vec.front();
    vec.erase(vec.begin());
    if(N==1) {
        cout << pre;
    }
    else {
        for(int i = 0; i<N-1; i++) {
            string now = vec.front();
            int count = 0;
            for(int j = 0; j < L; j++) {
                if(pre[j] != now[j]) {
                    count++;
                    if(count > 2) break; 
                }
            }
            if(count > 2) {
                ans = pre;
                break;
            }
            else if(i == N-2) {
                ans = now;
            }
            else {
                pre = now;
                vec.erase(vec.begin());
            }
        }
    }
    cout << ans;
}