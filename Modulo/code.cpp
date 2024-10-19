#include <iostream>
using namespace std;

int main(){
    int c[42];
    for(int i=0; i<10;i++){
        int n;
        cin >> n;
        c[n%42] = 1;
    }
    int ans=0;
    for(int n : c){
        if(n == 1) ans++;
    }
    cout << ans;
}