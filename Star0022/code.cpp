#include <iostream>
using namespace std;

int f(int x) {
    if(x%2 == 0) return x-1;
    else return x;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    
    int N;
    cin >> N;
    int col = f(N);

    for(int i = 0; i < (col+1)/2; i++) {
        for(int j = 0; j < col; j++) {
            if(i == 0 && j+1 == (col+1)/2) {
                cout << "*";
            }
            else if(j == (col-1)/2-i || j == ((col-1)/2-i)+2*i) {
                cout << "*";
            }
            else {
                cout << "-";
            }
        }
        cout << "\n";
    }

    int loop;
    if(N%2 == 0) loop = N/2;
    else loop = (col+1)/2-1;

    int k = loop-1;
    for(int i = 0; i < loop; i++) {
        for(int j = 0; j < col; j++) {
            if(i == loop-1 && j+1 == (col+1)/2) {
                cout << "*";
            }
            else if(j == (col-1)/2-k || j == ((col-1)/2-k)+2*k) {
                cout << "*";
            }
            else {
                cout << "-";
            }
        }
        cout << "\n";
        k--;
    }
}