#include <iostream>
using namespace std;

int main(){
    int a,b,high;
    cin >> a >> b;
    if(a == b) cout << a;
    else{
        for(int i=1; i<= a; i++){
            if(a%i == 0 && b%i == 0) high = i;
        }
        cout << high;
    }
}