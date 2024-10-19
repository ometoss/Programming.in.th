#include <iostream>
using namespace std;

int main() {
    int arr[9],sum=0,m,n;

    for(int i=0; i<9; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    for(int i=0; i<9; i++) {
        for(int j=i+1; j<9; j++) {
            if(sum - 100 == arr[i] + arr[j]) {
                m = arr[i]; n = arr[j];
            }
        }
    }
    
    for(int num:arr) {
        if(num != m && num != n){
            cout << num << '\n';
        }
    }
}